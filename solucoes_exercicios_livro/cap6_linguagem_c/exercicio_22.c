#include <stdio.h>

#define TAM 3

int main(){
    int mat[TAM][TAM];
    int sum = 0;
    int i, j; 

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
            // os elementos da diagonal secundário são tais que
            // a soma dos seus índices é igual a:
            // "tamanho - 1" quando começamos a contagem dos indices a partir do zero
            // "tamanho" quando começamos a contagem dos indices a partir do um.
            if(i + j == TAM - 1){
                sum += mat[i][j];
            }
        }
    }

    printf("A soma da diagonal secundária é: %d\n", sum);

    return 0;
}