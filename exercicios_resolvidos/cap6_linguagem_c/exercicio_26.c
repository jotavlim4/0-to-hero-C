#include <stdio.h>

#define TAM 5

int main(){
    int mat[TAM][TAM];
    int i, j;
    int sum = 0;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
            /* 
             * Os valores que estão acima da diagonal principal tem indice da coluna
             * maior que o indice da linha, isto é, i > j.
             */
            if(j > i){
                sum += mat[i][j];
            }
        }
    }

    printf("Soma dos elementos acima da diagonal principial: %d\n", sum);

    return 0;
}