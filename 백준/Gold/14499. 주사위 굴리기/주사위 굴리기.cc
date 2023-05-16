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
vector<vector<int> > pln; // 2차원 배열
//vector<int> ary; // 1차원 배열
//queue<int> q; // 큐
//stack<int> s; // 스택

int now[3] = {0, 2, 4};
int dice[6] = {0};

void swap(int i, int j) {
    int tmp = now[i];
    now[i] = now[j];
    now[j] = tmp;
}

void move(int direction){
    if(direction <= 2) {
        swap(0, 1);
        now[direction-1] = 5-now[direction-1];
    }
    else {
        swap(0, 2);
        if(direction == 3) now[0] = 5-now[0];
        else now[2] = 5-now[2];
    }
}

void copy(int i, int j) {
    if(pln[i][j] == 0) {
        pln[i][j] = dice[5-now[0]];
    }
    else {
        dice[5-now[0]] = pln[i][j];
        pln[i][j] = 0;
    }
}

//for문 간단하게.
#define FOR(n) for(int i = 0; i < (n); i++)

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

int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

    int m, n, x, y, k;
    cin >> m >> n >> x >> y >> k;
    pln.resize(m, vector<int>(n));
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            cin >> pln[i][j];
        }
    }



    int d;
    for (int i = 0; i < k; i++){
        cin >> d;
        if(d == 1 && y == n-1) continue;
        else if(d == 1) y++;
        if(d == 2 && y == 0) continue;
        else if(d == 2) y--;
        if(d == 3 && x == 0) continue;
        else if(d == 3) x--;
        if(d == 4 && x == m-1) continue;
        else if(d == 4) x++;
        move(d);
         
        copy(x, y);
        cout << dice[now[0]] << "\n";
    }
}