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
vector<vector<int> >  pln; // 2차원 배열
// vector<int> ary; // 1차원 배열
// queue<int> q; // 큐
// stack<int> s; // 스택

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

int rotate(int direction) {
    return (direction + 3) % 4;
}

int should_clean(int r, int c, int n, int m) {
    int flag = 0;
    if(r != 0 && pln[r-1][c] == 0) flag += 1;
    if(c != 0 && pln[r][c-1] == 0) flag += 8;
    if(r < n-1 && pln[r+1][c] == 0) flag += 4;
    if(c < m-1 && pln[r][c+1] == 0) flag += 2;

    return flag;
}

bool move_back(int &r, int &c, int d, int n, int m){
    if (d == 0) 
        if (r < n-1 && pln[r+1][c] == 1) return false;
        else r++;
    else if (d == 1)
        if (c != 0 && pln[r][c-1] == 1) return false;
        else c--;
    else if (d == 2) 
        if (r != 0 && pln[r-1][c] == 1) return false;
        else r--;
    else if (d == 3) 
        if (c < m-1 && pln[r][c+1] == 1) return false;
        else c++;
    return true;
}

void move_front(int &r, int &c, int d, int n, int m){
    if (d == 2 && r < n-1 && pln[r+1][c] == 0) r++;
    else if (d == 3 && c != 0 && pln[r][c-1] == 0) c--;
    else if (d == 0 && r != 0 && pln[r-1][c] == 0) r--;
    else if (d == 1 && c < m-1 && pln[r][c+1] == 0) c++;
}

int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

    int n, m;
    int r, c, d;
    cin >> n >> m;
    cin >> r >> c >> d;

    int result = 0;

    pln = vector<vector<int> >(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> pln[i][j];
        }
    }

    while(1) {
        if(pln[r][c] == 0){
            pln[r][c] = 2;
            result++;
        }

        int clean = should_clean(r, c, n, m);
        if (clean != 0){
            d = rotate(d);
            // cout << clean;
            while ((clean & (1 << d)) == 0) d = rotate(d);
            // cout << d << "\n";

            move_front(r, c, d, n, m);
            // cout << r << c << d << "\n";
        }
        else{
            if(move_back(r, c, d, n, m)) continue;
            else break;
        }
    }

    cout << result;
}