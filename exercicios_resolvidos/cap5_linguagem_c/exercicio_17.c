#include <stdio.h>


int main(){
    int num, contador = 1;

    scanf("%d", &num);

    
    for (int i = 0; i < num; i++){
        for(int j = 1; j <= i + 1; j++){
            j == i + 1 ? printf("%d\n", contador) : printf("%d ", contador);
            contador++;       
        }
    }

    return 0;
}