#include <stdio.h>
#include <string.h>

#define TAM 20

int main(){
    char strings[2][TAM];
    int i, j, k;
    int count = 0;
    int found = 0;


    //lê as strings do teclado e armazena em uma matriz.
    for(i = 0; i < 2; i++){
        fgets(strings[i], TAM, stdin);
        //elimina o \n.
        while(strings[i][count] != '\0'){
            if(strings[i][count] == '\n')
                strings[i][count] = '\0';
            else
                count++;
        }
        count = 0;
    }
    //executa o loop enquanto não chegar ao fim da string principal.
    i = 0;
    while(strings[0][i] != '\0'){
        //se encontrar a ocorrencia da primeira letra da segunda string na primeira, começa a procura.
        if(strings[1][0] == strings[0][i]){
            //a procura continua equanto as letras forem iguias e as strings não terminarem...
            //essa parte do código apenas faz a procura sem fazer modificações nas strngis...
            //repara que o loop continua apenas enquanto as tres condições são verdadeiras.
            for(j = i + 1, k = 1; strings[0][j] != '\0' && strings[1][k] != '\0' && strings[0][j] == strings[1][k]; j++, k++);

            //apos o loop ser concluido, se o ultimo elemento da segunda string for igual a '\0'...
            //significa que a segunda string foi encontrada na primeira.
            //se o loop for encerrar antes da segunda string chegar ao elemento \0...
            //implica que a segunda string nao foi encontrada na primeira.
            if(strings[1][k] == '\0'){
                found = 1;
                break;
            }
            else{
                found = 0;
                break;
            }
        }
        i++;
    }

    if(found == 1)
        printf("Está contida!\n");
    else
        printf("Não está contida!\n");

    return 0;
}