#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[30] = "abc 21.32301 Hoc C tai QTM";
   char *ptr;
   long ret;

   ret = strtol(str, &ptr, 10);
   printf("Phan gia tri so (unsigned long int) la: %ld\n", ret);
   printf("Phan chuoi la: |%s|", ptr);

   return(0);
}   