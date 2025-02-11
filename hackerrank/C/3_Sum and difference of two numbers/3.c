#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    
    scanf("%d %d", &a, &b);

    scanf("%f %f", &c, &d);
    
    int int_sum = a + b;
    int int_sub = a - b;
    float f_sum = c + d;
    float f_Sub = c - d;
    
    printf("%d %d\n", int_sum, int_sub);
    
    // scale to 1 decimal
    printf("%.1f %.1f\n", f_sum, f_Sub);
    
    return 0;
}