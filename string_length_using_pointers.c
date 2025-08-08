#include <stdio.h>
#include <string.h>


int main()
{
    char *str="Sailesh";
    
    char *tmp = str;
    
    
    int i=0;
    
    while(*str!='\0')
    {
        i++;
        str++;
    }
    
    printf("The length of given %s string is %d",tmp,i);
    
    return 0;
}
