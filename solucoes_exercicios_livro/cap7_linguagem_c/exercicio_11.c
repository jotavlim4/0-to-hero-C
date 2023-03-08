#include <stdio.h>

#define TAM 100

int main(){
    char string[TAM];
    int i, j = 0;

    fgets(string, TAM, stdin);

    while(string[j] != '\0'){
        if(string[j] == '\n')
            string[j] = '\0';
        else
            j++;
    }

    for(i = 0; i < j; i++){
        if(string[i] != ' ')
            string[i] += 32;
    }

    printf("%s\n", string);

    return 0;
}