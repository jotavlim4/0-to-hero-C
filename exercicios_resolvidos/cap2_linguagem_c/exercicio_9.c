#include <stdio.h>

int main(){
    float x, y, swap;

    scanf("%f %f", &x, &y);

    swap = x;
    x = y;
    y = swap;

    printf("%.2f %.2f\n", x, y);

    return 0;
}

/*
utilizei uma variável auxiliar para guardar o valor 
de umas variaveis e realizar a troca.

nao dava para fazer simplesmente x = y, e depois 
y = x

o valor que estava primeiramente em x ia ser perdido e portanto
y ia receber lixo de memória.

poderiamos, é claro, simplesmente mudar a ordem no printf.

*/