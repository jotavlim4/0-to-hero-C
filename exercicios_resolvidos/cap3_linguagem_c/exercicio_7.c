#include <stdio.h>

#define COTACAO 5.17

int main(){
    float real, dolar;

    scanf("%f", &real);

    dolar = real / COTACAO;

    printf("%.2f\n", dolar);

    return 0;
}