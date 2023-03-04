#include <stdio.h>

int main(){
    char str[15];
    int i;

    fgets(str, 15, stdin);

    for(i = 0; i < 4; i++)
        printf("%c", str[i]);

    putchar('\n');

    return 0;
}