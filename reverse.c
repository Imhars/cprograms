#include<stdio.h>
int main()
{
int num,Q,R,rev=0;
printf("enter one num\n");
scanf("%d",&num);
while(num>0)
{
    Q=num/10;
    R=num%10;
    rev=rev*10+R;
    num=Q;
}
printf("%d",rev);
    return 0;
}