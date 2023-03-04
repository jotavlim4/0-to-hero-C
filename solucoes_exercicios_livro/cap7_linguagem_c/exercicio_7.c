#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){
    char str[TAM];
    char aux[TAM];
    int i, j, k;


    fgets(str, TAM, stdin);

    k = 0;
    while(str[k] != '\0'){
        if(str[k] == '\n')
            str[k] = '\0';
        else
            k++;
    }

    for(i = 0; i < k; i++)
        aux[i] = str[i];
    
    for(i = k - 1, j = 0; i >= 0; i--, j++)
        str[j] = aux[i];

    if(strcmp(str, aux) == 0)
        printf("É palindromo!\n");
    else
        printf("NÃO é palindromo!\n");

    return 0;
}