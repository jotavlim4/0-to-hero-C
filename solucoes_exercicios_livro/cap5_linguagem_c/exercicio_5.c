#include <stdio.h>

int main(){
    int i, soma, contador;

    i = soma = contador = 0;

    while(contador < 50){
        if(i % 2 == 0){
            soma += i;
            contador++;
        }
        i++;
    }
    printf("%d\n", soma);

    return 0;
}