#include <stdio.h>

#define N 5

int main(){
    int lista[N];
    int soma = 0;
    float media;

    for(int i = 0; i < N; i++){
        scanf("%d", &lista[i]);
        soma += lista[i];
    }

    media = (soma * 1.0) / N;

    printf("A média dos valores lidos é: %f\n", media);

    return 0;
}