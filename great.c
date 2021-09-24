#include<stdio.h>
int main()
{
int num1, num2;
printf("enter any two number");
scanf("%d %d",&num1,&num2);
if(num1>num2)
{
printf("%d is larger\n",num1);
}
else
{
  printf("%d is Largest\n", num2);
}

    return 0;
}