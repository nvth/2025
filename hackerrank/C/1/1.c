#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    strcpy(s, "Hello, World!") ;
    printf("%s\n", s);

    printf("Enter input: ");
    scanf("%[^\n]%*c", s);  
    printf("%s", s);

    
    // strcpy(s, "Life is beautiful");
    // printf("%s", s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
