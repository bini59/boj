#include <stdio.h>
int main(){
    long long n, res;
    scanf("%lld", &n); res = 0;
    for(long long i = 1; i < n; i++) res = (res*(i+1) + (i % 2 ? 1 : -1))%1000000000;
    printf("%lld", res);
}