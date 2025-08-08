#include <stdio.h>
#include <string.h>


int main()
{
    char str1[100]="Sai";
    
    char *str2="lesh";
    
    char *p1 = str1;
    
    while(*p1!='\0')
    {
        p1++;
    }
    
    for(char *p2=str2; *p2!='\0';p2++,p1++)
    {
        *p1 = *p2;
    }
    
    printf("%s",str1);
    
    return 0;
}
