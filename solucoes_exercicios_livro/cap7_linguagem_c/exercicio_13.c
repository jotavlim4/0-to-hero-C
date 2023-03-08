#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){
    char string[TAM];
    unsigned int i, j;
    int k = 0;

    setbuf(stdin, NULL);
    fgets(string, TAM, stdin);

    while(string[k] != '\0'){
        if(string[k] == '\n')
            string[k] = '\0';
        else
            k++;
    }

    printf("Digite dois números i e j, tais que i, j <= %d:\n", k);

    scanf("%d %d", &i, &j);

    while(i <= j){
        i == j ? printf("%c\n", string[i]) : printf("%c", string[i]);
        i++;
    }

    return 0;
}