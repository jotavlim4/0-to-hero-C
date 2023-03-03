#include <stdio.h>

#define TAM 5

int main(){
    int matriz[TAM][TAM];
    int i, j;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            if(i == j){
                matriz[i][j] = 1;
                j == TAM - 1 ? printf("%d\n", matriz[i][j]) : printf("%d ", matriz[i][j]);
            }
            else{
                matriz[i][j] = 0;
                j == TAM - 1 ? printf("%d\n", matriz[i][j]) : printf("%d ", matriz[i][j]);
            }
        }   
    }

}