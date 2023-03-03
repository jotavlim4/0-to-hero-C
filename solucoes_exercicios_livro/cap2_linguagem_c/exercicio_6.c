#include <stdio.h>

int main(){
    double number;

    scanf("%lf", &number); 
    //para ler double podemos usar %f, mas o compilador 
    //reclama pedindo pra usar %lf, acredito que seja "long float"

    printf("%E\n", number);

    return 0;
}


//usando %e
//entrada: 1525
//saida: 1.525000e+03

//usando %E
//entrada: 1525
//saida: 1.525000E+03
