#include <stdio.h>

int main(){
    float Hn, cont, soma = 0;
    int num;

    scanf("%d", &num);

    cont = 1;
    do{
        Hn = 1 / cont;
        soma += Hn;
        cont++;
    }while(cont <= num);

    printf("Hn = %.2f\n", soma);

    return 0;
}