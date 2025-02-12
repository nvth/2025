#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = 2*n - 1; // chieu dai do thi x-y

    for (int i = 0; i < len; i++) // tao truc hoanh
    {
        /* code */
        for (int j = 0; j < len; j++)// khoi tao truc tung
        {
            /* code */
            int min = 0; // khoi tao var min = 1
            min = i < j ? i : j; // so sanh i va j, neu i < j gan min = i neu khong thi gan min = j
            min = min < len - i ? min : len - i - 1; // so sanh min voi len - i 
            min = min < len - j - 1 ? min : len -j - 1; // so sanh min voi len - j - 1
            printf("%d ", n - min); // tao hinh chu nhat theo pattern n
        }
        printf("\n");
    }
    
  	// Complete the code to print the pattern.
    return 0;
}