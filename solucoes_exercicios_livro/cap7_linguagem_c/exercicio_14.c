#include <stdio.h>
#include <string.h>

//codigo de cesar para 3 posicoes  A -> B -> C -> D (3 posicao após o A)

#define TAM 100

int main(){
    char s[TAM];
    int i, k;

    fgets(s, TAM, stdin);

    k = 0;
    while(s[k] != '\0'){
        if(s[k] == '\n')
            s[k] = '\0';
        else
            k++;
    }

    for(i = 0; i < k; i++){
        if(s[i] > 119)
            s[i] -= 23;
        else if(s[i] == ' ')
            continue;
        else
            s[i] += 3;
    }

    printf("%s\n", s);

    return 0;
}