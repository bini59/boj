#include <stdio.h>

char a[5][16];
int len[5];

int str_len(char *a){
    int s_len = 0;
    while(1){
        if(a[s_len++] == '\0'){
            break;
        }
    }
    return s_len-1;
}

int main(){
    
    for(int i = 0; i < 5; i++) {
        scanf("%s", a[i]);
        len[i] = str_len(a[i]);
    }
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(len[j] > i){
                printf("%c", a[j][i]);
            }
        }
    }
}