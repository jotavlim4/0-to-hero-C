#include <stdio.h>


int main(){
    int num, count, fatorial, aux;
    float E, sum = 0.0;

    scanf("%d", &num);

    aux = 1;
    count = 1;
    do{
        fatorial = count * aux;
        //conversao implícita de tipos
        E = 1.0 / fatorial;
        sum += E;

        aux = fatorial;
        count++;

    }while(count <= num);
    
    printf("O valor de E quando N = %d é %f\n", num, sum);

    return 0;
}