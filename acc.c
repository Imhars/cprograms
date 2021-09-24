#include<stdio.h>
int message(int num1,int num2);
int main()
{
    int a;
    a=message(100,5);
    printf("%d",a);
    return 0;
}
int message(int num1,int num2)
{
    int result;
    result=num1/num2;
    return result;
}