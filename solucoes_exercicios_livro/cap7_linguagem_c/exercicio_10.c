#include <stdio.h>

#define TAM 100

int main(){
    char string[TAM];
    int i, j, count = 0;

    fgets(string, TAM, stdin);

    while(string[count] != '\0'){
        if(string[count] == '\n')
            string[count] = '\0';
        else
            count++;
    }

    for(i = 0; i < count; i++){
        //na tabela ASCII a diferença entre uma letra minuscula e sua correspondente...
        //maiscula é constante, este valor é 32...
        //portanto, para fazer a conversao, basta subtrair 32, caso fosse o contrario...
        //bastaria somar 32.
        if(string[i] != ' ')
            string[i] -= 32;
    }

    printf("%s\n", string);

    return 0;
}