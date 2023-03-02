#include <stdio.h>
#include <math.h>

#define TAM 10

int main(){
    int i;
    int vetor[TAM];
    float somatorio, media, desvio_padrao, variancia, dif;

    for(i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
        somatorio += vetor[i];
    }

    media = somatorio / (float) TAM;
    
    variancia = 0;
    for(i = 0; i < TAM; i++){
        dif = vetor[i] - media;
        variancia += pow(dif, 2);
    }

    desvio_padrao = sqrt(variancia / (TAM - 1));

    printf("%f\n", desvio_padrao);

    return 0;
}