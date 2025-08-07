#include <stdio.h>

void reverse_array(int *p1, int n)
{
    for(int i = 0; i < n / 2; i++)
    {
        int temp = *(p1 + i);                       
        *(p1 + i) = *(p1 + n - 1 - i);              
        *(p1 + n - 1 - i) = temp;                    
    }

    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(p1 + i));
    }
}

int main()
{
    int arr1[] = {10, 20, 30};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    reverse_array(arr1, n);  

    return 0;
}
