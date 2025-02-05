#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int a[5] = {3, 8, 4, 2, 9};
    printf("Gia tri cua a : %d\n", a);
    printf("Gia tri cua a %d \n", &a);
    for(int i = 0; i < n; i++){
        printf("Dia chi cua a[%d] : %d\n", i, a + i); // a + i <=> &a[i]
    } 
    printf("Mang a : ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(a + i));
        printf ("%d", a[i]);
    }
    return 0;
}