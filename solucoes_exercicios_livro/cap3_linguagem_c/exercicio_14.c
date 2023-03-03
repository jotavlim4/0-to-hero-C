#include <stdio.h>

#define DIF 32

int main(){
    char CH, ch;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &CH);

    ch = CH + DIF;

    printf("Letra: %c\nCódigo ASCII: %d\n", ch, ch);

    return 0;
}

/*
todas as letras maísculas estão a uma distancia constante
de 32 posicoes.
*/