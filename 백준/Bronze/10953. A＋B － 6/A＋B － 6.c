#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    int a, b;
    char t;
    
    for(int i = 0; i < n; i++){
        scanf("%d%c%d", &a, &t, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}