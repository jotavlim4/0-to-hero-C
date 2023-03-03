#include <stdio.h>

#define PI 3.141592

int main(){
    float altura, raio, volume;

    printf("Digite respectivamente altura e raio do cilindo\n");
    scanf("%f %f", &altura, &raio);

    volume = PI * (raio * raio) * altura;

    printf("O volume do cilindro de altura %.2f e raio %.2f é %.2f\n",
    altura, raio, volume);

    return 0;
}