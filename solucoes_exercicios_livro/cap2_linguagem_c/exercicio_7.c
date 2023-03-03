#include <stdio.h>

int main(){
    char ch;

    scanf("%c", &ch);

    printf("%d\n", ch);

    return 0;
}

/*
entrda: c
saida: 99

o compilador faz a conversão de maneira automática, incluse
nenhum warning foi levantado durante a compilação

da pra entender que o compilador entenda isso como um procedimento
normal, não um tipo de gambiarra.

*/