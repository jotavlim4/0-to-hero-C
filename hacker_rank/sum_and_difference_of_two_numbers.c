#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int int_num1, int_num2;
    float float_num1, float_num2;
    
    scanf("%d %d %f %f", &int_num1, &int_num2, &float_num1, &float_num2);
    
    printf("%d %d\n%.1f %.1f\n", 
    int_num1 + int_num2, 
    int_num1 - int_num2, 
    float_num1 + float_num2, 
    float_num1 - float_num2);
    
    return 0;
}
