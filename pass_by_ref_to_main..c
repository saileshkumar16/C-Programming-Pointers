#include <stdio.h>


int *func()
{
   static int arr[5];
    
    int *p = arr;
    
    for(int i=0; i<5; i++)
    {
        *(p+i)= i+1;
    }
    
    return arr;
}

int main() 
{
    
   int *q = func();
   
   for(int i =0 ; i<5; i++)
   {
       printf("%d ",*(q+i));
   }

    
    return 0;
}
