#include <stdio.h>


int main(){
    int num, maior, menor;

    scanf("%d", &num);

    maior = menor = num;

    while(1){
        scanf("%d", &num);
        if(num < 0)
            break;
        else{
            if(num > maior)
                maior = num;
            
            if(num < menor)
                menor = num;
        }
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);
    
    return 0;
}