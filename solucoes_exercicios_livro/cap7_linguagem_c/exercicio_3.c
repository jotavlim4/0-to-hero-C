#include <stdio.h>

int main(){
    char str[15];
    int i;

    setbuf(stdin, NULL);
    gets(str);
    
    i = 0;
    while(str[i] != '\0'){
        i++;
    }

    printf("A string \"%s\" possue %d caracteres.\n", str, i);

    return 0;
}