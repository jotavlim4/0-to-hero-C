#include <stdio.h>
#include <math.h>

int main(){
    float a, b, h;

    scanf("%f %f", &a, &b);
    //double pow(double base, double exp);
    h = sqrt(pow(a, 2) + pow(b, 2));

    printf("O triangulo retangulo tem hipotenusa %.0f\n", h);


    return 0;
}

//para a compilação funciar devemos fazer gcc <nome_do_arquivo.c> -lm