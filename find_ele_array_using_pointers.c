#include <stdio.h>
#include <string.h>

void search(int *p, int n)
{
    int ele = 20;
    int found = 0;
    int i;
    for( i=0; i<n; i++)
    {
        if(*(p+i)==ele)
        {
        found = 1;
        break;
        }
    }
    if(found)
    printf("%d is found at %d index",ele,i);
    else
    printf("%d is not found in the array",ele);
}

int main()
{
    int arr[]={10,20,30,40};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    search(arr,n);
    return 0;
}