#include <stdio.h>

int main(){
    int num1, num2, maior;

    scanf("%d %d", &num1, &num2);

    maior = num1 > num2 ? num1 : num2;

    printf("O maior número é: %d\n", maior);

    return 0;
}