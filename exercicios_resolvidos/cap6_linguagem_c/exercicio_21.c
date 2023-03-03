#include <stdio.h>

#define TAM 3

int main(){
    int mat[TAM][TAM];
    int i, j;
    int sum = 0;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
            if(i == j){
                sum += mat[i][j]; 
            }
        }
    }

    printf("A soma dos elementos da matriz principal: %d\n", sum);

    return 0;
}