#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    if (10000 <= n <= 99999)
    {   
        while (n != 0)
        {
            int last = n % 10; // lấy chữ số cuối cùng bằng cách chia lấy phần dư eg: 123 % 10 = 3
            sum += last;
            n /= 10;        // bỏ chữ số cuối cùng sau khi được cộng vào biến sum bằng cách chia lấy phần nguyên eg: 123 / 10 = 12
        }
        printf("%d", sum);
    }else
    {
        printf("must be five digist");
    }    
    return 0;
}