#include <stdio.h>

#define PERCENT 0.2

int main(){
    int prestacao, salario;

    scanf("%d %d", &prestacao, &salario);

    if(prestacao > PERCENT * salario)
        printf("Empréstimo não condecido!\n");
    else
        printf("Empréstimo condecido!\n");

    return 0;

}