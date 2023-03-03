#include <stdio.h>

int main(){
    int num, contador, conta_divisores;

    scanf("%d", &num);

    if(num <= 1){
        printf("Número inválido!\n");
    }
    else{
        contador = 1;
        conta_divisores = 0;
        while(contador <= num){
            if(num % contador == 0)
                conta_divisores++;

            contador++;

        }
    }
    if(conta_divisores == 2)
        printf("%d é um número primo!\n", num);
    else
        printf("%d não é um número primo, tem %d divisores!\n", num, conta_divisores);

    return 0;
}