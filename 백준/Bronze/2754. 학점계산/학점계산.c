#include <stdio.h>

int main(){
    char s[3];
    scanf("%s", s);
    printf("%.1f", s[0] == 'F' ? 0 : (4.0+'A'-s[0] + (s[1] == '+' ? 0.3 : s[1] == '-' ? -0.3 : 0)));
}