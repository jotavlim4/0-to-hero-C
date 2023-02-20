#include <stdio.h>

int main(){
    int number, desloc;

    printf("Digite, respectivamente, o número e o deslocamento que deseja: ");
    scanf("%d %d", &number, &desloc);

    printf("Deslocamento à esqueda %d vez(es): %d\nDeslocamento à direita %d vez(es): %d\n", desloc, number << desloc, desloc, number >> desloc);

    return 0;
}