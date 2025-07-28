#include <stdio.h>


void func(int *arr)
{
    for(int i=0;i<3;i++)
    {
        *(arr + i) = *(arr + i) + 1;
        printf("%d ",*(arr+i));
    }
    
    
}

int main() 
{
    
    int arr[3]={10,20,30};
    
    func(arr);

    
    return 0;
}
