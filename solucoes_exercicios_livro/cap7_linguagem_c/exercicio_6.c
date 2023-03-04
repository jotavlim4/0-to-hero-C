#include <stdio.h>

int main(){
    char str[15];
    char vogais[6] = "aeiou";
    char ch = 'p';
    int count, count_v;
    int i, j;

    fgets(str, 15, stdin);
    
    count = count_v = 0;
    while(str[count] != '\0'){
        if(str[count] == '\n')
            str[count] = '\0';
        else
            count++;
    }

    for(i = 0; i < count; i++){
        for(j = 0; j < 5; j++){
            if(str[i] == vogais[j]){
                str[i] = ch;
                count_v++;
            }
        }
    }

    printf("%s\nQuantidade de vogais: %d\n", str, count_v);

    return 0;
}