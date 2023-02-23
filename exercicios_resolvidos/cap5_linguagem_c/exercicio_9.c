#include <stdio.h>

#define INT_MIN	-2147483647 

int main(){
    int numero, maior, menor, aux;

    scanf("%d", &numero);

    maior = menor = numero;

    for(int i = 0; i < 9; i++){
        scanf("%d", &numero);
        if(numero > maior)
            maior = numero;

        if(numero < menor)
            menor = numero;
    }
    
    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}