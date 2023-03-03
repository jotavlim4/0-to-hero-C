#include <stdio.h>

#define TAM 10

int main(){
    int mat[TAM][TAM];
    int i, j;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            if(i < j)
                mat[i][j] = (2 * i) + (7 * j) - 2;
            else if(i == j)
                mat[i][j] = (3 * i * i) - 1;
            else
                mat[i][j] = (4 * i * i * i) + (5 * j * j) + 1;         
        }
    }

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            j == TAM - 1 ? printf("%d\n", mat[i][j]) : printf("%d ", mat[i][j]);
        }
    }

    return 0;
}