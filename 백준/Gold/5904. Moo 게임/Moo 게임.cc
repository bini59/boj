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


void sol(ll N, ll n, ll sum){
	if(n < 4){
		if(n == 1) cout << "m";
		else cout << "o";
		return;
	}
	if(n < sum*2+N+3){
		if(n-sum < N+3){
			if(n-sum == 1) cout << "m";
			else cout << "o";
			return;
		}
		else sol(2, n-sum-N-2, 3);
	}
	else{
		sol(N+1, n, sum*2+N+2);
	}
	
}


int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);
	
	ll n;
	cin >> n;
	sol(2, n, 3);
	
	
}