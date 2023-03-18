#include <stdio.h>
#include <stdlib.h>

int s[21];
int size;

int check(int x){
    for(int i = 0; i < size; i++)
        if(s[i] == x) return i+1;
    return 0;
}

void add(int x){
    if(!check(x)) s[size++] = x;
}

void Remove(int x){
    if(check(x)) {
        s[check(x)-1] = s[size-1];
        size--;

    }
}

void toggle(int x){
    if(check(x)) Remove(x);
    else add(x);
}

void all(){
    for(int i = 0; i < 20; i ++) s[i] = i+1;
    size = 20;
}

void empty(){
    size = 0;
}

int main(){
    int n;
    scanf("%d", &n);
    char *command = (char *)malloc(sizeof(char)*10);
    int cn;
    size = 0;
    for(int i = 0 ; i < n; i++){
        scanf(" %s %d", command, &cn);
        if(command[0] == 'c') {
            if(check(cn)) printf("1\n");
            else printf("0\n");
        }
        else if(command[0] == 'a'){
            if (command[1] == 'd')add(cn);
            else all();
        } 
        else if(command[0] == 'r') Remove(cn);
        else if(command[0] == 't') toggle(cn);
        else if(command[0] == 'e') empty();
    
    }
    
}