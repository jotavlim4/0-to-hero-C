#include <stdio.h>

int main(){
    int n, i;

    scanf("%d", &n);

    i = n;
    while(i >= 0){
        printf("%d\n", i);
        i--;
    }
    
    return 0;
}
