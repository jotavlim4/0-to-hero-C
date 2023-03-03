#include <stdio.h>

int main(){
    float number;
    
    scanf("%f", &number);
    // o exercio é usar %d para formatar o valor armazenado em uma variavel float
    printf("%d\n", number);

    return 0;
}

//Basicamente o compilador retorna um erro informando que a variável armazena um valor do tipo int 
//e que o formato %f espera float ou double

//entrada: 4.7
//saida: 929655472

//TODO
//pesquisar o porquê de tal saida.
