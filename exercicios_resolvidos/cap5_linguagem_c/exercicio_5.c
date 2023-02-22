#include <stdio.h>

int main(){
    int i,  soma = 0, contador = 1;

    i = 0;
    while(contador <= 50){
        if(i % 2 == 0){
            soma += i;
            contador++;
        }
        i++;
    }
    printf("%d\n", soma);

    return 0;
}