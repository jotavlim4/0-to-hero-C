#include <stdio.h>

#define TAM 10

int main(){
    int vet[TAM];
    int count = 0;

    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0)
            count++;
    }

    printf("Quantidade de números pares lidos: %d\n", count);

    return 0;
}