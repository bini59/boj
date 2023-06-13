//쓸거같은 STL 목록
#include <iostream>
#include <vector>
//#include <queue>
//#include <stack>
//#include <cmath>
//#include <algorithm>
//#include <string>

using namespace std;

/*
scanf, printf 쓰기.

cout 을 쓸때는 꼭 endl 말고 \n 쓰기.

아니면 밑에꺼 꼭 쓰기, 시간 개걸림.

*/



/*
범위 때문에 문제 안풀릴때는, 

index 0은 무시하고 1부터 시작해보기.. 은근 저거때문에 화날때가 많은거같음...
*/



/*
꼭 데이터 범위 확인하기!!
long long 범위 잘 확인해서 풀기.
*/
//typedef long long ll;


//자주 쓸 데이터들
//vector<vector<int>> pln; // 2차원 배열
//vector<int> ary; // 1차원 배열
//queue<int> q; // 큐
//stack<int> s; // 스택

//for문 간단하게.
#define FOR(n) for(int i = 0; i < (n); i++)

typedef struct _loc{
    int r, c;
    int blank;
    int suki;
} loc;


template <typename T>
ostream &operator<<(ostream &out, vector<T> arr){
    FOR(arr.size()) out << arr[i] << " ";
    return out;
}

template <typename T>
ostream &operator<<(ostream &out, pair<T *, int>arr){
    FOR(arr.second) out << arr.first[i] << " ";
    return out;
}

ostream &operator<<(ostream &out, loc tmp){
    out << "loc. r : " << tmp.r << " c : " << tmp.c << " suki : " << tmp.suki << " blank : " << tmp.blank << "\n";
    return out;
}


int map[22][22];
int sukis[401][4];
void init_map(int n){
    for (int i = 0; i < n+2; i++){
        map[0][i] = -1;
        map[n+1][i] = -1;
        map[i][0] = -1;
        map[i][n+1] = -1;
    }
}

int d[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
int get_friend(int r, int c){
    int n = map[r][c];
    int f = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if(map[r+d[i][0]][c+d[i][1]] == sukis[n][j]) {
                f++;
                break;
            }
        }
    }
    return f;
}
int get_blank(int r, int c){
    int f = 0;
    for (int i = 0; i < 4; i++){
        if(map[r+d[i][0]][c+d[i][1]] == 0) {
            f++;
        }
    }
    return f;
}


// 0 > a 가 우위
// 1 > b 가 우위
int compare_loc(loc a, loc b){
    if (a.suki < b.suki) return 1;
    if (a.suki == b.suki && a.blank < b.blank) return 1;
    if (a.suki == b.suki && a.blank == b.blank && a.r > b.r) return 1;
    if (a.suki == b.suki && a.blank == b.blank && a.r == b.r && a.c > b.c) return 1;
    return 0;
}



loc find_loc(int n, int student){
    loc res;
    res.r = 23;
    res.c = 23;
    res.blank = -1;
    res.suki = -1;
    loc tmp;

    int tmp_flag = 0;
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < n + 1; j++){
            if(map[i][j] != 0) continue;
            
            tmp.r = i;
            tmp.c = j;
            map[i][j] = student;
            tmp.suki = get_friend(i, j);
            tmp.blank = get_blank(i, j);
            map[i][j] = 0;

            // cout << "res : " << res;
            // cout << "tmp : " << tmp << "\n";

            res = compare_loc(res, tmp) == 0 ? res : tmp;

        }
    }
    // cout << "loc : " << student << " " << res.r << " " << res.c << " " << res.suki << " " << res.blank << "\n";
    return res;
}

int get_satisfaction(int n){
    int satisfact[5] = {0, 1, 10, 100, 1000};
    int s = 0;
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < n + 1; j++){
            s += satisfact[get_friend(i, j)];
        }
    }
    return s;
}

int main(){
    // 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

    int N;
    cin >> N;
    init_map(N);

    int student;
    loc tmp;
    for (int i = 0; i < N * N; i++){
        cin >> student;
        for (int j = 0; j < 4; j++) cin >> sukis[student][j];
        tmp = find_loc(N, student);
        map[tmp.r][tmp.c] = student;
    }

    // for (int i = 1; i < N + 1; i++){
    //     for (int j = 1; j < N + 1; j++){
    //         cout << map[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cout << get_satisfaction(N);
}