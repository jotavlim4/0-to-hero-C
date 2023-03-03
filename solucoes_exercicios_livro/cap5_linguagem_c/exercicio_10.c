#include <stdio.h>

int main(){
    int numero, media, contador, soma = 0;

    contador = 0;
    while (contador < 10){
        scanf("%d", &numero);
        if (numero < 0 )
            continue;
        else{
            soma += numero;
            contador++;
        }
    }

    media = soma / contador;

    printf("A média dos números positivos lidos é %d\n", media);    

    return 0;
}