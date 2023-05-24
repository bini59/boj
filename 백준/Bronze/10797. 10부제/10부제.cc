#include <stdio.h>
int main(){
    int n, tmp, res = 0;
    scanf("%d", &n);
    for(int i=0;i<5;i++){scanf("%d",&tmp); if(n == tmp) res++;}
    printf("%d",res);
}