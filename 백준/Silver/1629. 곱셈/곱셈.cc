/*
scanf, printf 쓰기.

cout 을 쓸때는 꼭 endl 말고 \n 쓰기.

아니면 밑에꺼 꼭 쓰기, 시간 개걸림.

*/

/*
범위 때문에 문제 안풀릴때는, 

index 0은 무시하고 1부터 시작해보기.. 은근 저거때문에 화날때가 많은거같음...

*/
//cin.tie(null); 
//ios::sync_with_stdio(false);


/*
꼭 데이터 범위 확인하기!!
long long 범위 잘 확인해서 풀기.
*/
typedef long long ll;


//쓸거같은 STL 목록
#include <iostream>
#include <vector>
//#include <queue>
//#include <stack>
#include <cmath>
//#include <algorithm>



using namespace std;

int main(){
	
	
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	n %= k;
	
	vector<int> q;
	vector<ll> num(33, n);
	for(int i = 1; i < int(floor(log2(m)))+1; i++) num[i] = (num[i-1]*num[i-1])%k;
	ll result = 1;
	while(m > 0){
		q.push_back(int(floor(log2(m))));
		m -= pow(2, int(floor(log2(m))));
	}
	for(int i = 0; i < q.size(); i++) {
		result = (result*num[q[i]])%k;
	}
	
	if(n == 0) result = 0;
	printf("%lld", result);
	
	
	
	
}