#include <stdio.h>

#define TAM 4

int main(){
    int matriz[TAM][TAM];
    int i, j;
    int maior, linha, coluna;

    scanf("%d", &matriz[0][0]);

    maior = matriz[0][0];

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            if(i == 0 && j == 0)
                continue;
            else{
                scanf("%d", &matriz[i][j]);
                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                    linha = i;
                    coluna = j;
                }
            }
        }
    }
    printf("O maior elemento é: %d\nLinha: %d\nColuna: %d\n", maior, linha, coluna);

    return 0;
}