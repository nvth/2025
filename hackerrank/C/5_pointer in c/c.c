#include <stdio.h>

// int main(){
//     int a = 5;
//     int sum = a+ 1;
//     a = sum;
//     printf("%d", a); 
// }

int main(){
    int a, sum;
    a = 1;
    int *pa = &a;

    sum = a + 1;
    printf("%d %d", pa, sum);

}