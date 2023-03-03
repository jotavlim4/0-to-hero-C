#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main(){
    int notas[LINHA][COLUNA];
    int piores_notas[COLUNA] = {0};
    int menor_nota, posicao;
    int i, j;

    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            //preenche notas
            scanf("%d", &notas[i][j]);
            //atribui a primeira nota de cada linha a variável menor nota
            if(i + j == i){
                menor_nota = notas[i][j];
            }
            //faz a comparação das notas de que cada linha
            if(notas[i][j] < menor_nota){
                menor_nota = notas[i][j];
                posicao = j;
            }
        }
        //ao final do loop, quando todas as notas da linha já tiverem sido comparadas
        //incrementa a posicao correspondente da menor nota no vetor piores notas
        piores_notas[posicao]++;
    }   

    for(i = 0; i < COLUNA; i++){
        if(i == 0)
            printf("Quantidade de alunos que foram mal na primeira prova: %d\n", piores_notas[i]);
        else if(i == 1)
            printf("Quantidade de alunos que foram mal na segunda prova: %d\n", piores_notas[i]);
        else
            printf("Quantidade de alunos que foram mal na terceira prova: %d\n", piores_notas[i]);
    }

    return 0;
}