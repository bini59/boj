#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int x, y, z;
    x = n / 300;
    n %= 300;
    y = n / 60;
    n %= 60;
    z = n / 10;
    n %= 10;
    
    if(n) printf("-1");
    else printf("%d %d %d", x, y, z);
}