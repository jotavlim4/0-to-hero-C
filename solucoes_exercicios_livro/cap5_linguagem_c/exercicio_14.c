#include <stdio.h>

int main(){
    int num, proximo, primerio, segundo, i;

    scanf("%d", &num);

    primerio = 0;
    segundo = 1;

    if(num < 0)
        printf("Valor inválido. O número digitado dever ser maior ou igual a zero.\n");
    else{
        i = 0;
        do{
            if(i == 0)
                i == num - 1 ? printf("%d.\n", primerio) : printf("%d\t", primerio);

            else if(i == 1)
                i == num - 1 ? printf("%d.\n", segundo) : printf("%d\t", segundo);

            else{
                proximo = primerio + segundo;
                i == num - 1 ? printf("%d.\n", proximo) : printf("%d\t", proximo);
                
                primerio = segundo;
                segundo = proximo;
            }
            i++;
        }while(i < num);
    }

    return 0;
}