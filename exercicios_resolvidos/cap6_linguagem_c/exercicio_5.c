#include <stdio.h>

#define TAM 8

int main(){
    int vet[8];
    int X, Y;
    int soma = 0;

    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }
    scanf("%d %d", &X, &Y);

    soma += vet[X] + vet[Y];

    printf("Soma dos elementos na posições %d e %d: %d\n", X, Y, soma);

    return 0;
}