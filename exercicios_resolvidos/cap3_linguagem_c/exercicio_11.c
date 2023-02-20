#include <stdio.h>

#define PI 3.141592

int main(){
    float raio, area;

    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("O valor da área do circulo de raio %.2f é %.2f\n", raio, area);
    return 0;
}