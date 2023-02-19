#include <stdio.h>

const int ano_atual = 2023;

int main(){
    int idade, ano_nasc;

    scanf("%d", &idade);

    ano_nasc = ano_atual - idade;

    printf("%d\n", ano_nasc);


    return 0;
}