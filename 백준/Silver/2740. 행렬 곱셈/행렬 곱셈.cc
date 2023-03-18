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

vector<vector<int>> A;
vector<vector<int>> B;

vector<vector<int>> multiply(int n, int p, int m){
	vector<vector<int>> res(n, vector<int>(m, 0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			for(int k = 0; k < p; k++){
				res[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	
	return res;
	
}


int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	//ios::sync_with_stdio(false);
	

	int n, m;
	cin >> n >> m;
	A = vector<vector<int>>(n, vector<int>(m, 0));
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < m; j++) cin >> A[i][j];
	}
	int o, p;
	cin >> o >> p;
	B = vector<vector<int>>(o, vector<int>(p, 0));
	for(int i = 0; i < o; i ++){
		for(int j = 0; j < p; j++) cin >> B[i][j];
	}
	
	vector<vector<int>> res = multiply(n, m, p);
	
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j < res[i].size(); j++) cout << res[i][j] << " ";
		cout << '\n';
	}
	
	
}