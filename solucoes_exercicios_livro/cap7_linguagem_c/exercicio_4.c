#include <stdio.h>

int main(){
    char str[15];
    int i, j;
    int count;

    setbuf(stdin, NULL);
    fgets(str, 15, stdin);

    count = 0;
    while(str[count] != '\0')
        count++;

    for(i = count; i >= 0; i--){
        if(str[i] == '\n')
            continue;
        else
            printf("%c", str[i]);
    }

    putchar('\n');

    return 0;
}