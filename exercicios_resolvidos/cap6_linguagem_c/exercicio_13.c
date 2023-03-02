#include <stdio.h>
#include <stdbool.h>

#define TAM 10


int main(){
    int i, j;
    int lista[TAM];
    bool repetido;

    i = 0;
    do{
        scanf("%d", &lista[i]);
        for(j = 0; j < i; j++){ //compara o número lido com os números anteriores
            repetido = false;
            if(lista[i] == lista[j]){ //caso o novo número digitido seja encontrando nos anteriores
                printf("O número %d já foi digitado. Tente outro. \n", lista[i]); //imprime mensagem de erro
                repetido = true;
                break; //for;a a saída do loop para ir direto para o decisão de incrementar ou nao.
            }
        }
        if(!repetido) //caso o número não seja repetido ele é incluido normalmente e um novo número é solicitado.
            i++;
    }while(i < TAM);


    for(i = 0; i < TAM; i++){
        printf("%d\n", lista[i]);
    }



    return 0;
}