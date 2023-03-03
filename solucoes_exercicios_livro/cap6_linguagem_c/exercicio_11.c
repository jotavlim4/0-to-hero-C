#include <stdio.h>
#include <math.h>

#define MAX_TAM 20

int main(){
    double vet[MAX_TAM], pow_vet[MAX_TAM];

    for(int i = 0; i < MAX_TAM; i++){
        scanf("%lf", &vet[i]);
        pow_vet[i] = pow(vet[i], 2);
    }

    for(int i = 0; i < MAX_TAM; i++)
        printf("%lf\n", vet[i]);

    
    putchar('\n');

    for(int i = 0; i < MAX_TAM; i++)
        printf("%lf\n", pow_vet[i]);



    return 0;
}