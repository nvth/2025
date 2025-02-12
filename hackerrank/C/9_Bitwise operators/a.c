#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0;
  int max_or = 0;
  int max_xor = 0;
  //printf("a b and or xor\n");
  for (int i = 1; i <= n ; i++){
    for (int j = i + 1; j <= n; j++){
        int and_bw = i & j; //phep so sanh and &
        int or_bw = i | j; // phep so sanhs or |
        int xor_bw = i ^ j;// phep so sanh xor ^

        if (and_bw < k && and_bw > max_and){ // so sanh lay max cua phep and va max phai nho hon k (theo de bai)
            max_and = and_bw;
        }
        if (or_bw < k && or_bw > max_or){ // so sanh lay max cua phep or va max phai nho hon k (theo de bai)
            max_or = or_bw;
        }
        if (xor_bw < k && xor_bw > max_xor){ // so sanh lay max cua phep xor va max phai nho hon k (theo de bai)
            max_xor = xor_bw;
        }
      
    }  
    /* code */
  }
  printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
