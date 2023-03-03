#include <stdio.h>

#define TAM 4
#define REF 10

int main(){
    int mat[TAM][TAM];
    int i, j;
    int count = 0;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > REF)
                count++;
        }
    }
    printf("Quantidade de elementos maiores que 10: %d\n", count);

    return 0;
}
