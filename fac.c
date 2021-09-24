#include<stdio.h>
int factorial (int num);
int main ()
{
    int f;
    f= factorial(5);
    printf("%d",f);
    return 0;
}

int factorial(num)
{
    int result=1;
    while(num!=1)
    {
        result=result*num;
        num--;
    }
    return result;
}