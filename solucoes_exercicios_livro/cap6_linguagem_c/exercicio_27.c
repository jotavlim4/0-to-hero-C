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
            * os valores que estão abaixo da diagonal principal
            * tem indice da linha maior que o indice da columa, isto é, i > j. 
             */
            if(i > j)
                sum += mat[i][j];
        }
    }

    printf("A soma dos valores que estão abaixo da diagonal principa é: %d\n", sum);

    return 0;
}