#include <stdio.h>
#include <string.h>


int main()
{
    char str1[100];
    
    char *str2="Sailesh";
    
    char *p1 = str1;
    char *p2 = str2;
    
    for(; *p2!='\0'; p2++,p1++ )
    {
        *p1 = *p2;
    }
    
    printf("%s",str1);
    
    return 0;
}
