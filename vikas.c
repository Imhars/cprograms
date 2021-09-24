#include<stdio.h>
int main()
{
    int i,sum=0;
    int marks[5];
    printf("enter a number\n");
for(i=0;i<5;i++)
{
    scanf("%d",&marks[i]);
}
for(i=0;i<5;i++)
{
    sum=sum+marks[i];
}
printf("%d",sum);


    return 0;
}