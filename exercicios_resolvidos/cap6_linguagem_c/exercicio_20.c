#include <stdio.h>

#define TAM 4

int main(){
    int mat[TAM][TAM];
    int i, j;
    int count;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] < 0)
                count++;
        }
    }

    printf("A quantidade de elementos negativos é %d\n", count);

    return 0;
}