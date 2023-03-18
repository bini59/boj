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
void printVector(vector<ll> arr){
	FOR((int)arr.size()){
		printf("%lld ", arr[i]);
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

ll f(ll a, ll b){return b?f(b,a%b):a;}

void multiMatrix(vector<vector<ll>> &a,  vector<vector<ll>> &b){
    vector<vector<ll>> res = {{0, 0}, {0, 0}};
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < a.size(); j++){
            for (int k = 0; k < a.size(); k++){
                res[i][j] = (res[i][j]+ ((a[i][k] * b[k][j]) % MOD))%MOD;
            }
        }
    }
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < a.size(); j++){
            a[i][j] = res[i][j];
        }
    }
}

ll fibo(ll n){
    vector<vector<ll>> a = {{1, 1}, {1, 0}};
    vector<vector<ll>> res = {{1, 1}, {1, 0}};
    while(n){
        if(n%2){
            multiMatrix(res, a);
        }
        n >>= 1;
        multiMatrix(a, a);
    }

    return res[1][1];
}


int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;

        ll x = f(a, b);

        cout << fibo(x) << "\n";
    }

    int result = 0;
	
}

