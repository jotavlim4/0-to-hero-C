#include <stdio.h>

int main(){
    int contagem;

    contagem = 10;
    while(contagem >= 0){
        contagem == 0 ? printf("...%d\nFim!\n", contagem) : printf("%d...\n", contagem);
        --contagem;
    }
    
}