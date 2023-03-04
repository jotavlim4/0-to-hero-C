#include <stdio.h>
#include <string.h>

int main(){
    char str[15];
    char aux[15];
    int i, j;
    int lenght;
    int count;

    fgets(str, 15, stdin);
  //retira o \n e inclue \0
    count = 0;
    while(str[count] != '\0'){
        if(str[count] == '\n')
            str[count] = '\0';
        else
            count++;
    }
//SOLUÇÃO USANDO FUNÇÕES DE MANIPULAÇÃO DE STRING:
/*  
    //copia o valor da str para aux
    strcpy(aux, str);

    //conta a quantidade de caracteres de str
    lenght = strlen(str);

    //inverte os valroes de str percorrendo aux no caminho inverso.
    for(i = lenght - 1, j = 0; i >= 0; j++, i--){
        str[j] = aux[i];
    } 
*/

 //SOLUÇÃO SEM USAR FUNÇÕES DE MANIPULAÇÃO DE STRING:
    //copia conteudo de str para aux
    for(i = 0; i < 15; i++)
        aux[i] = str[i];
    //inverte str percorrendo aux pelo caminho contrário
    for(i = count - 1, j = 0; i >= 0; i--, j++)
        str[j] = aux[i];

    printf("%s\n", str);

    return 0;
}