#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    printf("Número após deslocamento para direita: %d\nNúmero após o deslocamento para esquerda: %d\n",
     numero  << 1, numero >> 1);
    
    return 0;
}

/*
Em deslocamento bit a bit cada movimentacao corresponde a uma
multiplicacao/divisao por 2

N << d = N * (d * 2)
N >> d = N / (d * 2)

<< aumenta o número (multiplica)
>> diminui o número (divide)
*/