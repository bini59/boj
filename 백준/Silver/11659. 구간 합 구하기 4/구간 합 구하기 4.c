#include <stdio.h>

#define MAXSIZE 100000

int main(){
    int n, m;
    int temp;

    int array[MAXSIZE];

    scanf("%d %d", &n, &m);

    int start, end;

    scanf(" %d", &array[0]);

    for(int i = 1; i < n; i++){
        scanf(" %d", &temp);
        array[i] = array[i-1]+temp;
    }

    for(int i = 0; i < m; i++){
        scanf(" %d %d", &start, &end);
        if(start == 1) printf("%d\n", array[end-1]);
        else printf("%d\n", array[end-1]-array[start-2]);
    }

}