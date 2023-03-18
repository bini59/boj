#include <stdio.h>

int main(){
    int n, k;

    scanf("%d%d", &n, &k);

    int answer = 1;
    for (int i = n-k+1; i <n+1; i++)
    {
        answer *= i;
    }
    for (int i = 1; i < k+1; i++)
    {
        answer /= i;
    }

    printf("%d", answer);

    return 0;
}