#include <stdio.h>

#define TAM 5

int main(){
    int mat[TAM][TAM];
    int i, j;
    int sum_dig, sum_ndig;

    sum_dig = sum_ndig = 0;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
            if(i == j || i + j == TAM - 1)
                sum_dig += mat[i][j];
            else
                sum_ndig += mat[i][j];
        }
    }

    printf("A diferentes entres as soma é: %d\n", sum_dig - sum_ndig);

    return 0;
}