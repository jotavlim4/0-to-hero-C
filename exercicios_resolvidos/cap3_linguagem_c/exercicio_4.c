#include <stdio.h>
#define CONST 4

int main(){
    float num1, num2, num3, num4, media_a;

    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    media_a = (num1 + num2 + num3 + num4)/CONST;

    printf("A média aritmética dos números é: %f", media_a);

    return 0;
}