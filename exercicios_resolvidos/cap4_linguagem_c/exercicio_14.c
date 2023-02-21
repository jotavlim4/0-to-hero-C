#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num % 3 == 0){
        if(num % 5 != 0)
            printf("O número é divisível por 3 ou 5\n");
    }
    else if (num % 5 == 0){
        if(num % 3 != 0)
            printf("O número é divisível por 3 ou 5\n");
    }
    return 0;
}