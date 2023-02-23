#include <stdio.h>

#define MAX_DENO 55


int main(){
    float serie, soma = 0;
    int numerador, denominador;

    numerador = 1;
    denominador = 1;
    while(denominador <=  MAX_DENO){
        serie = numerador / denominador;
        soma += serie;

        numerador += 2;
        denominador++;
    }

    printf("S = %.2f\n", soma);

    return 0;
}