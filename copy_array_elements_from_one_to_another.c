#include <stdio.h>


void func(int *p1,int *p2, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p2+i)=*(p1+i));
    }
}

int main()
{
    int arr1[]={10,20,30};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    
    int arr2[n];
    
    
    func(arr1,arr2,n);
}
        
        
     
        
       

