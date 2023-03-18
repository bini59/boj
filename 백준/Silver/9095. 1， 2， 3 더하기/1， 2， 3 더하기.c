#include <stdio.h>

int res;

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

void three(int n, int m, int o);

void two(int n, int m, int o){
    res += factorial(n+m+o)/(factorial(n)*factorial(m)*factorial(o));

    if(n>=2) two(n-2, m+1, o);
    if(n>=3) three(n-3, m, o+1);

    return;
}

void three(int n, int m, int o){
    res += factorial(n+m+o)/(factorial(n)*factorial(m)*factorial(o));
    if(n>=3) three(n-3, m, o+1);

    return;
}

void solution(int n, int m, int o){
    res ++;
    if(n>=2) two(n-2, m+1, o);
    if(n>=3) three(n-3, m, o+1);
    return;
}

int main(){
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++){
        scanf(" %d", &m);
        res = 0;
        solution(m, 0, 0);
        printf("%d\n", res);
    }
}