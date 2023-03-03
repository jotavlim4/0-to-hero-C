#include <stdio.h> 

int main(){
    int num1, num2, num3;
    int escolha;
    int geo, ari, har, pond;

    printf("Digite 3 números inteiros positivos: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    putchar('\n');

    printf("Escolha qual média deseja calcular:\n(1)Geométrica\n(2)Ponderada\n(3)Harmônica\n(4)Aritmética\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1: 
            geo = num1 * num2 * num3;
            printf("Média geométrica: %d\n", geo);
            break;
        case 2:
            pond = (num1 + (num2 * 2) + (num3 * 3))/6;
            printf("Média ponderada: %.2f\n", (float) pond);
            break;
        case 3:
            har = 1/((1/num1) + (1/num2) + (1/num3));
            printf("Média hamônica: %.2f\n", (float) har);
            break;
        case 4:
            ari = (num1 + num2 + num3)/3;
            printf("Média aritmética: %.2f\n", (float) ari);
            break;
        default:
            printf("Valores inválidos!\n");

    }


    return 0;
}