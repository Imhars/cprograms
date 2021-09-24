#include<stdio.h>
int main()
{
    int num1;
    harsh:
    printf("enter a number\n");
    scanf("%d",&num1);
if(num1>0)
{
goto harsh;
}
   return 0;
}