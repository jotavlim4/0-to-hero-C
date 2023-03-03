#include <stdio.h>


int main(){
    int A[] = {1, 0, 5, -2, -5, 7};
    int soma = 0;

    for(int i = 0; i < 6; i++){
        if(i == 0 || i == 1 || i ==5)
            soma += A[i];
    }
    printf("%d\n", soma);

    A[4] = 100;

    for(int i = 0; i < 6; i++)
        printf("%d\n", A[i]);



    return 0;
}