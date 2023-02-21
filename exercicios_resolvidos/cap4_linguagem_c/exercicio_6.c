#include <stdio.h>

int main(){
    float altura, peso_ideal;
    char sexo;

    scanf("%f %c", &altura, &sexo);

    switch (sexo){
        case 'M':
            peso_ideal = (72.7 * altura) - 58;
            printf("O peso ideal é: %.1f\n", peso_ideal);
            break;
        case 'm':
            peso_ideal = (72.7 * altura) - 58;
            printf("O peso ideal é: %.1f\n", peso_ideal);
            break;
        case 'F':
            peso_ideal = (62.1 * altura) - 44.7;
            printf("O peso ideal é: %.1f\n", peso_ideal);
            break; 
        case 'f':
            peso_ideal = (62.1 * altura) - 44.7;
            printf("O peso ideal é: %.1f\n", peso_ideal);
            break; 
        default:
            printf("Dados inválidos!\n");           
    }
    return 0;
}