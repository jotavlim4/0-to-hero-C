#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    printf("%d/%d/%d\n", dia, mes, ano);

    return 0;
}