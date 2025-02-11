#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function 
    int sum = *a + *b;
    int abs_sub = abs(*a - *b);

    *a = sum;
    *b = abs_sub;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("enter a and b: ");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}