#include <stdio.h>

#define TAM 5

int main(){
    int mat[TAM][TAM];
    int i, j;
    int sum;

    sum = 0;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
            if(i != j && i + j != TAM - 1)
                sum += mat[i][j]; 
        }
    }

    printf("A soma dos elementos que não estão em nenhuma das diagonais é: %d\n", sum);

    return 0;
}