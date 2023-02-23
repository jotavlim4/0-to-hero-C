#include <stdio.h>

int main(){
    int num, cont, soma = 0;

    scanf("%d", &num);

    cont = 1;
    while(cont < num){
        if(num % cont == 0)
            soma += cont;

        cont++;
    }
    printf("A soma dos divisores de %d(exclusive) é %d.\n", num, soma);

    return 0;
}