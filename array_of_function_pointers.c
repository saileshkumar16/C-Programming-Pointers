// Online C compiler to run C program online
#include <stdio.h>


int add(int a,int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
    
    int (*fp[4]) (int, int);
    
    fp[0] = &add;
    fp[1] = &sub;
    fp[2] = &mul;
    fp[3] = &div;
    
    int x = 10;
    int y =5;
    
    for(int i=0; i<4; i++)
    {
        printf("%d ",fp[i](x,y));
    }
    return 0;
}

    int add(int a, int b)
    {
        return a+b;
        
    }
    
    int sub(int a, int b)
    {
        return a-b;
        
    }
    
    int mul(int a, int b)
    {
        return a*b;
        
    }
    
    int div(int a, int b)
    {
        return a/b;
        
    }