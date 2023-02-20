#include <stdio.h>

#define QUANTIA 780000
#define PROP1 0.46
#define PROP2 0.32
#define PROP3 0.22

int main(){
    float valor1, valor2, valor3;

    valor1 = QUANTIA * PROP1;
    valor2 = QUANTIA * PROP2;
    valor3 = QUANTIA * PROP3;

    printf("Ganhador 1: %.2f\nGanhador 2: %.2f\nGanhador 3: %.2f\n", 
    valor1, valor2, valor3);
    printf("Total: %.2f\n", valor1 + valor2 + valor3);

    return 0;
}