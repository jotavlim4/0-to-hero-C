#include <stdio.h> 

#define N 6

int main(){
    int lista[N];

    for(int i = 0; i < N; i++)
        scanf("%d", &lista[i]);

    putchar('\n');

    for(int i = N - 1; i >= 0; i--)
        printf("%d\n", lista[i]);

    return 0;
}