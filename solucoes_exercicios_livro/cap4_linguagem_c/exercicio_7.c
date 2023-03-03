#include <stdio.h>


int main(){
    float preco, valor_final;
    char estado;

    scanf("%f %c", &preco, &estado);

    switch(estado){
        case 'M':
            valor_final = preco + (preco * 0.07);
            printf("O valor mais impostos é %.1f\n", valor_final);
            break;
        case 'S':
            valor_final = preco + (preco * 0.12);
            printf("O valor mais impostos é %.1f\n", valor_final);
            break;
        case 'R':
            valor_final = preco + (preco * 0.15);
            printf("O valor mais impostos é %.1f\n", valor_final);
            break;
        case 'A':
            valor_final = preco + (preco * 0.08);
            printf("O valor mais impostos é %.1f\n", valor_final);
            break;
        default:
            printf("Erro!\n");
    }
    return 0;
}