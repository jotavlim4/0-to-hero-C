#include <stdio.h>


int main(){
    int numero, c, d, u, inverso;

    scanf("%d", &numero);

    c = numero / 100;
    d = (numero % 100) / 10;
    u = (numero % 100) % 10; 

    inverso = (u * 100) + (d * 10) + c;

    printf("O inverso de %d é %d\n", numero, inverso);

    return 0;
}