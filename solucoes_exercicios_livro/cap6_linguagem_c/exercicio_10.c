#include <stdio.h>

#define TAM 100

int main(){
    int vet[TAM];
    int count = 0;
    int num = 0;

    while(count < TAM){
        if(num % 7 != 0){
            vet[count] = num;
            count++;
        }
        num++;
    }

    for(int i = 0; i < TAM; i++)
        printf("%d\n", vet[i]);

    return 0;
}