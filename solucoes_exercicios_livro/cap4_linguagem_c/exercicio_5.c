#include <stdio.h>
#include <math.h>

int main(){
    double num;

    scanf("%lf", &num);

    if(num >= 0)
        printf("O quadrado do número é %.0lf\nSua raiz quadrada é %.0lf\n", pow(num, 2), sqrt(num));
    
    return 0;
}