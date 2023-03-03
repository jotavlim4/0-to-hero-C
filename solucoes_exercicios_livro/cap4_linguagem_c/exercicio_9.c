#include <stdio.h>

int main(){
   float altura, peso;

    scanf("%f %f", &altura, &peso);

    if(peso <= 60){
        if(altura < 1.2)
            printf("A\n");
        else if(altura >= 1.2 && altura <= 1.7)
                printf("B\n");
        else
            printf("C\n");
    }
    if(peso > 60 && peso <= 90){
        if(altura < 1.2)
            printf("D\n");
        else if(altura >= 1.2 && altura <= 1.7)
                printf("E\n");
        else
            printf("F\n");
    }
    if(peso > 90){
        if(altura < 1.2)
            printf("G\n");
        else if(altura >= 1.2 && altura <= 1.7)
                printf("H\n");
        else
            printf("I\n");
    }

    return 0;
}