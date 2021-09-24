#include<stdio.h>
int main()
{
    int num1,num2,num3,number;
    printf("enter a three digit number\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2)
    { 
        printf("num1 is greatist",num1);
    }
    else if (num2>num3)
    {
        printf("this is largest",num2);
    }
    else
    {
        printf ("num3 is largest");
    }
    return 0;
}