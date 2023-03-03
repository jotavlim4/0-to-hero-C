#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
    int n;
    int q, r, d, sum = 0;
    
    scanf("%d", &n);

    for(d = 10000; d >= 1; d /= 10){
        q = n / d;
        sum += q;
        
        r = n % d;

        n = r; 
    }

    printf("soma: %d\n", sum);
    
    return 0;
}
