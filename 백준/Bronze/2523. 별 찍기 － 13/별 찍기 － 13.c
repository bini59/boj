#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < n-abs(n-1-i); j++) {
            printf("*");
        }
        printf("\n");
    }
}