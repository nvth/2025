#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    printf("Enter ch: ");
    scanf("%c", &ch);
    printf("%c\n", ch);
    //scanf("\n");

    char s[200];
    printf("Enter s:");
    scanf("%s", s);
    printf("%s\n", s);
    //scanf("\n");
    //fflush(stdin); fflush không được khuyến khích trong C
    getchar();

    char sen[200];
    printf("Enter senc: ");
    scanf("%[^\n]%*c", sen);
    printf("%s", sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}