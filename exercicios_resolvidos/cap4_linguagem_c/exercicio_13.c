#include <stdio.h>

int main(){
    int num1, num2;
    int escolha;

    printf("Digite: \n(1) para ADIÇÃO\n(2) para SUBTRAÇÃO\n(3) para DIVISÃO\n(4) para multiplicação\n");
    putchar('\n');
    scanf("%d", &escolha);

    printf("Digite os números(dois) que deseja efetuar operação: ");
    scanf("%d %d", &num1, &num2);

    switch(escolha){
        case 1:
            printf("Resultado %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado %d\n", num1 - num2);
            break;
        case 3:
            printf("Resultado %d\n", num1 / num2);
            break;
        case 4:
            printf("Resultado %d\n", num1 * num2);
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}