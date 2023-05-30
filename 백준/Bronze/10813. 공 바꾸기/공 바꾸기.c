#include <stdio.h>
void swap(int *a, int i, int j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int bag[101];
    for(int i = 0; i < a; i++) bag[i] = i+1;
    int x, y;
    for(int i = 0 ; i<b;i++){
        scanf("%d %d", &x, &y);
        swap(bag, x-1, y-1);
    }
    for(int i = 0; i < a; i++) printf("%d ", bag[i]);
}