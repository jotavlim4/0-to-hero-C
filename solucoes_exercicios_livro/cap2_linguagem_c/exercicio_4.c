#include <stdio.h>

int main(){
    int number;

    scanf("%d", &number);
    // o exercio é usar %f para formatar o valor armazenado em uma variavel int
    printf("%f", number);

    return 0;
}

//Basicamente o compilador retorna um erro informando que a variável armazena um valor do tipo int 
// e que o formato %f espera float ou double

//entrada: 4
//saida: 0.000000

//TODO
//pesquisar o porquê de tal saida.
