#include <stdio.h>

int main(){
    int num, bigger, smaller, n;
    int count, count_bigger, count_smaller;

    scanf("%d %d", &n, &num);

    bigger = smaller = num;
    count = 1;
    count_bigger = count_smaller = 0;

    while(count < n){
        scanf("%d", &num);
        if(num > bigger){
            bigger = num;
            count_bigger++;
        }
        if(num < smaller){
            smaller = num;
            count_smaller++;
        }
        count++;
    }
    
    printf("O maior número é %d e foi lido %d vezes\nO menor número é %d e foi lido %d vezes\n", bigger, count_bigger, smaller, count_smaller);



    return 0;
}