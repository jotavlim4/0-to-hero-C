#include <stdio.h>

#define TAM 10

int main(){
    int X[TAM];
    int maior, menor;

    for(int i = 0; i < TAM; i++)
        scanf("%d", &X[i]);

    maior = menor = X[0];

    for(int i = 0; i < TAM; i++){
        if(X[i] > maior)
            maior = X[i];

        if(X[i] < menor)
            menor = X[i];
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    
    return 0;
}