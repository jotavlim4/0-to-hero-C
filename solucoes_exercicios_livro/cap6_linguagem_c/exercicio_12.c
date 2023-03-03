#include <stdio.h>
#include <stdbool.h>

#define TAM 10

int main(){
    int i, j;
    int lista[TAM];
    int iguais[TAM] = {0};
    bool encontrado;

    for(i = 0; i < TAM; i++){
        scanf("%d", &lista[i]);
    }

    for(i = 0; i < TAM; i++){
        for(j = i + 1; j < TAM; j++){
            if(lista[i] == lista[j]){
                encontrado = false;
                for(int k = 0; k < i; k++){
                    if(iguais[k] == lista[i]){
                        encontrado = true;
                    }
                }

                if(!encontrado){
                    iguais[i] = lista[i];
                }

            }
        }
    }

    for(i = 0; i < TAM; i++){
        if(iguais[i] != 0)
            printf("%d\n", iguais[i]);
    }
    return 0;
}