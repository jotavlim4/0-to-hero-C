#include <stdio.h>

int main(){

    int x, y, swap;

    scanf("%d %d", &x, &y);

    swap = x;
    x = y;
    y = swap;

    printf("%d %d\n", x, y);

    return 0;
}

/*
utilizei uma variável auxiliar para guardar o valor 
de umas variaveis e realizar a troca.

nao dava para fazer simplesmente x = y, e depois 
y = x

o valor que estava primeiramente em x ia ser perdido e portanto
y ia receber lixo de memória.
*/