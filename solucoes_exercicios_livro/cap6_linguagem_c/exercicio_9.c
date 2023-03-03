#include <stdio.h>

#define TAM 10

int main(){
    int A[TAM], B[TAM], C[TAM];

    for(int i = 0; i < TAM; i++)
        scanf("%d", &A[i]);
    
    for(int i = 0; i < TAM; i++){
        scanf("%d", &B[i]);

        C[i] = A[i] - B[i];
        
        if(i == TAM - 1){
            for(int j = 0; j < TAM; j++)
                printf("%d\n", C[i]);
        }
    }
        






    return 0;
}