#include <stdio.h>
int max,x,y;
int main(){
    int tmp = 0;
    for(int i = 0; i < 81; i++) {
        scanf("%d", &tmp);
        if(tmp > max){
            max = tmp;
            x = i/9;
            y = i%9;
        }
    }
    printf("%d\n", max);
    printf("%d %d", x+1, y+1);
}