#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    
    int *p1 = &a;
    int *p2 = &b;
    
    printf("Addition of 2 numbers using pointers is %d", *(p1)+*(p2));
    return 0;
}
        
        
     
        
       

