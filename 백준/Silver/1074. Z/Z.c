#include <stdio.h>

typedef long long ll;

ll solution(int N, int r, int c){
	ll x = 1 << (N-1);
	ll temp = r/x - c/x;
	ll temp2;
	if(temp == 0){
		if(r/(1 << N-1) == 1) temp2 = x*x*3;
		else temp2 = 0;
	}
	else if(temp == 1) temp2 = x*x*2;
	else if(temp == -1) temp2 = x*x;
	if (N>1) return temp2 += solution(N-1, r%x, c%x);
	return ++temp2;
}

int main() {
	int N,r,c;
	
	scanf("%d%d%d", &N, &r, &c);
	printf("%lld", solution(N, r, c)-1);
	
}