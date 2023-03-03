#include <stdio.h>

#define TAM 3

int main(){
    int i, j;
    int matriz[TAM][TAM];
    int menor;

    scanf("%d", &matriz[0][0]);

    menor = matriz[0][0];

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            if(i == 0 && j == 0)
                continue;
            else{
                scanf("%d", &matriz[i][j]);
                if(matriz[i][j] < menor){
                    menor = matriz[i][j];
                }
            }

        }
    }
    printf("O menor elemento da matriz é: %d\n", menor);

    return 0;
}