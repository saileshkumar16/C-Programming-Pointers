#include <stdio.h>


void func(int *p, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i)+1);
    }
}

int main()
{
    int arr[]={10,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    func(arr,n);
}
        
        
     
        
       

