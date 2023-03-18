#include <stdio.h>

int main(){
    int n;
    int min, res;
    res = 0;
    min = 214;
    for(int i = 0; i < 7; i++){
        scanf("%d", &n);
        if(n % 2){
            min = n < min ? n : min;
            res += n;
        }
    }
    if(res == 0) {printf("-1"); return 0; }
    printf("%d\n%d", res, min);
    
}