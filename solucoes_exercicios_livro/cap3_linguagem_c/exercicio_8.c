//celsius to fahrenheit
//F = C * (9.0 / 5.0) + 32.0

#include <stdio.h>

#define CONST1 (9.0 / 5.0)
#define CONST2 32.0

int main(){
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * CONST1) + CONST2;

    printf("F = %f\n", fahrenheit);

    return 0;

}