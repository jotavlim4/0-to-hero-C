#include <stdio.h>

int main(){
    int number;
    char ch;
    float number_dec;

    printf("Digite na seguinte ordem: inteiro, char e float.\n");
    scanf("%d %c %f", &number, &ch, &number_dec);

    printf("%d %c %f\n", number, ch, number_dec);
    printf("%d\t%c\t%f\n", number, ch, number_dec);
    printf("%d\n%c\n%f\n", number, ch, number_dec);

    return 0;
}