#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){
    char string[TAM];
    float price;
    int i;

    fgets(string, TAM, stdin);

    while(string[i] != '\0'){
        if(string[i] == '\n')
            string[i] = '\0';
        else
            i++;
    }

    scanf("%f", &price);

    printf("Mercadoria: %s\nValor total: %.2f\nDesconto: %.2f\nPreço à vista: %.2f\n", string, price, price * 0.1, price - price * 0.1);


    return 0;
}