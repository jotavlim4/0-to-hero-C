#include <stdio.h>

#define TAM 10

int main(){
    int vet[TAM];
    int count_neg = 0;
    int sum_pos = 0;

    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
        if(vet[i] >= 0)
            sum_pos += vet[i];
        else
            count_neg++;
    }

    printf("Soma dos números positivos: %d\nQuantidade de números negativos lidos: %d\n", sum_pos, count_neg);

    return 0;
}