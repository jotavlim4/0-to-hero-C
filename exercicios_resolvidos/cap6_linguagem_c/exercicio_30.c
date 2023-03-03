#include <stdio.h>

#define TAM 5

int main(){
    int mat[TAM][TAM];
    int i, j, k;
    int prod[TAM][TAM] = {0};
    //ler mat
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++)
            scanf("%d", &mat[i][j]);
    }

    //faz a multiplicacao
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            for(k = 0; k < TAM; k++){
                prod[i][j] += (mat[i][k] * mat[k][j]);
            }
        }
    }

    printf("A matriz B = A^2 = \n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++)
            j == TAM - 1 ? printf("%d\n", prod[i][j]) : printf("%d ", prod[i][j]);
    }
    

    return 0;
}