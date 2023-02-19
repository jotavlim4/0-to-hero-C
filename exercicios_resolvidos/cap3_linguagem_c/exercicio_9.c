#include <stdio.h>

#define PI 3.141592
#define CONSTANTE 180

/*
R  = G * (pi / 180)
*/

int main(){
    float graus, radianos;

    scanf("%f", &graus);

    radianos = graus * (PI / CONSTANTE);

    printf("%.2f\n", radianos);

    return 0;
}

