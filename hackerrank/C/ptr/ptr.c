#include <stdio.h>
int main(){
    int n = 24;
    int* ptr;
    int* ptr2;
    ptr = &n;
    ptr2 = &n;
    long long m = 11111;
    printf("address of ptr is %d\n", ptr);
    printf("address of ptr is %d\n", ptr2);
    printf("addr of n is %d\n", &n);
    printf("value of ptr reference %d \n", *ptr);
    // thay doi gia tri n bang cach thay doi gia tri con tro ptr tham chieu toi n
    *ptr = 100;
    *ptr2 = 200;
    printf("value of n after fixed value ptr reference %d %d \n", n, *ptr); // n is changed
    printf("value of n after fixed value ptr reference %d %d \n", n, *ptr2);
    return 0;
}