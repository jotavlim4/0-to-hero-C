#include <stdio.h>

#define TAM 10

int main(){
    int i, j;
    float vetor[TAM];
    float aux;

    for(i = 0; i < TAM; i++)
        scanf("%f", &vetor[i]);

    for(i = 0; i < TAM; i++){
        for(j = i + 1; j < TAM; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("Vetor ordenado = [");
    for(i = 0; i < TAM; i++){
        i == TAM - 1 ? printf("%.2f]\n", vetor[i]) : printf("%.2f, ", vetor[i]);
    }


    return 0;
}