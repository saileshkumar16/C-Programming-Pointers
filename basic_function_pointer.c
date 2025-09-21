// Online C compiler to run C program online
#include <stdio.h>


void func1()
{
    printf("Hello from func1\n");
}

void func2()
{
    printf("Hello from func2\n");
}
int main()
{
    
    void (*fp)();
    
    fp = func1;
    func1();
    
    fp = func2;
    func2();
    
    return 0;
}
