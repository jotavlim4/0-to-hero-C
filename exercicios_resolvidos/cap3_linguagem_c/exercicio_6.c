#include <stdio.h>
#define CONVER 3.6

int main(){
    float v_ms, v_kmh;

    scanf("%f", &v_kmh);

    v_ms = v_kmh / CONVER;

    printf("%.1f m/s\n", v_ms);

    return 0;
}