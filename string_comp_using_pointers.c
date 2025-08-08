#include <stdio.h>
#include <string.h>

int compare(char *p1, char *p2)
{
    while(*p1!='\0' && *p2!='\0')
    {
        if(*p1!=*p2)
        {
        return *p1 - *p2;
        }
        
        p1++;
        p2++;
    }
    
    return *p1 - *p2;
}

int main()
{
    char str1[]="Sailesh";
    char str2[]="Kumar";
    
    int comp = compare(str1,str2);
    
    if (comp < 0)
    printf("%s is shorter or smaller than %s\n", str1, str2);
    else if (comp == 0)
    printf("%s and %s are the same\n", str1, str2);
    else
    printf("%s is bigger than %s\n", str1, str2);

    return 0;
}