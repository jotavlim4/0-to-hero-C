#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){
    char mat[2][TAM];
    int i, j, dif;

    j = 0;
    for(i = 0; i < 2; i++){
        fgets(mat[i], TAM, stdin);

        while(mat[i][j] != '\0'){
            if(mat[i][j] == '\n'){
                mat[i][j] = '\0';
            }
            else{
                j++;
            }
        }
        j = 0;
    }
    i = 0;
    while(mat[0][i] == mat[1][i] && mat[0][i] != '\0')
        i++;
    
    dif = mat[0][i] - mat[1][i];

    if(dif < 0)
        printf("%s\n%s\n", mat[0], mat[1]);
    else
        printf("%s\n%s\n", mat[1], mat[0]);

    return 0;
}