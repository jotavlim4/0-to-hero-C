#include <stdio.h>

#define TAM 50

int main(){
    char mat[2][TAM];
    int i, j, k, count = 0;
    int count_occurence = 0;

    for(i = 0; i < 2; i++){
        //lê as strings do teclado
        fgets(mat[i], TAM, stdin);
        
        //retira o \n das strings e poe \0 no lugar
        while(mat[i][count] != '\0'){
            if(mat[i][count] == '\n')
                mat[i][count] = '\0';
            else
                count++;
        }
        count = 0;
    }

    i = 0;
    //percorre a primeira string até encontrar o caracter nulo
    while(mat[0][i] != '\0'){
        //começa a comparação case encontre alguma ocorrencia da primeira letra da segunda string na primeira string
        if(mat[1][0] == mat[0][i]){
            //verifica se os caracteres consecutivos são iguais
            //o loop só continua se:
            //a primeira string nao chegou ao fim e...
            //a segunda string nao chegou ao fim e...
            //a letras são iguais.

            //caso alguma dessas condições não ocorram, o loop termina
            for(j = i + 1, k = 1; mat[0][j] != '\0' && mat[1][k] != 0 && mat[0][j] == mat[1][k]; j++, k++);

            //se o loop terminar e a ultima letra da segunda string que foi comparada for \0...
            //significa que a segunda string foi encontrada na primeira
            if(mat[1][k] == '\0'){
                //conta a ocorrencia e o loop continua até que a primeira string termine.
                count_occurence++;
            }
        }
        i++;
    }

    printf("A string \"%s\" aparece %d vezes na primeira!\n", mat[1], count_occurence);

    return 0;
}