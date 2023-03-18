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
typedef long long ll;


//자주 쓸 데이터들
//vector<vector<int>> pln; // 2차원 배열
//vector<int> ary; // 1차원 배열
//queue<int> q; // 큐
//stack<int> s; // 스택

//for문 간단하게.
#define FOR(n) for(int i = 0; i < (n); i++)


// print Vector<int>
void printVector(vector<int> arr){
	FOR((int)arr.size()){
		printf("%d ", arr[i]);
	}

	printf("\n");
}

// print Array<int>
void printArray(int *arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

#define MOD 1000000007

ll map[50][50] = {0};
ll res[50][50] = {0};

void multiMatrix(ll (&a)[][50],  ll (&b)[][50], int n){
    ll _res[50][50] = {0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                _res[i][j] = (_res[i][j]+ ((a[i][k] * b[k][j]) % MOD))%MOD;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = _res[i][j];
            // cout << a[i][j] << " ";
        }
        // cout << "\n";
    }
}



int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

    int n, m;
    cin >> n >>  m;
    for (int i = 0; i < n; i++) res[i][i] = 1;
    for (int i = 0; i < m; i++){
        int t1, t2;
        cin >> t1 >> t2;
        map[t1 - 1][t2 - 1] = 1;
        map[t2 - 1][t1 - 1] = 1;
    }
    int D;
    cin >> D;
    while (D > 0)
    {
        if (D % 2)
        {
            multiMatrix(res, map, n);
        }
        multiMatrix(map, map, n);
        D >>= 1;
    }
    cout << res[0][0];
}