#include <stdio.h>

int main(){
    int numero, soma = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &numero);
        soma += numero;
    }
    printf("A soma dos números digitados é %d\n", soma);

    return 0;
}