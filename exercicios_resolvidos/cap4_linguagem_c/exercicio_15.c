#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0)
        printf("Não é equação de segundo grau.\n");
    else{
        delta = pow(b, 2) - 4 * a * c;

        x1 = (- b + sqrt(delta))/(2 * a);
        x2 = (- b - sqrt(delta))/(2 * a);
        
        if(delta == 0)
            printf("x1 = x2 = %.2lf(Raiz única)\n", x1);

        else if(delta > 0)
            printf("x1 = %.2lf e x2 = %.2lf\n", x1, x2);

        else
            printf("Não existe raiz real.\n");
            
    }
    return 0;
}