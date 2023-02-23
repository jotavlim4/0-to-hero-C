#include <stdio.h>


int main(){
    int contador, soma = 0;

    contador = 0;
    while(contador < 1000){
        if(contador % 3 == 0 || contador % 5 == 0)
            soma += contador;
        contador++;
    }
    printf("A soma dos múltiplos de 3 ou 5 dos %d primeiros números naturais é %d\n", contador, soma);

    return 0;
}

//pra um núnmero ser simultaneamente divisivel por 3 e 5 ele precisa ser divisivel por 15.