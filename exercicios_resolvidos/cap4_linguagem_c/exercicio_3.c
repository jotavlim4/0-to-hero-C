#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num % 2 == 0)
        printf("O número é par.\n");
    else
        printf("O número é impar.\n");
        
    return 0;
}