#include <stdio.h>

#define TAM 3

int main(){
    int mat[TAM][TAM];
    int vet[TAM] = {0};
    int i, j;

    for(j = 0; j < TAM; j++){
        for(i = 0; i < TAM; i++){
            scanf("%d", &mat[i][j]);
            vet[j] += mat[i][j];
        }
    }

    printf("O vetor que armazena a soma dos elementos das colunas é: \n[");
    for(i = 0; i < TAM; i++)
        i == TAM - 1 ? printf("%d]\n", vet[i]) : printf("%d, ", vet[i]);

    return 0;
}