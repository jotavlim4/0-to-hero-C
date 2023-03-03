#include <stdio.h>

int main(){
    int numero, media, soma = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &numero);
        soma += numero;
    }

    media = soma / 10;

    printf("A média dos números digitados é %d\n", media);

    return 0;
}