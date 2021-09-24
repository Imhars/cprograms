#include<stdio.h>
int main()
{
int cel,fe;
printf("enter temperature\n");
scanf("%d",&cel);
fe= ( cel * (9/5) ) +32;
printf("fe is %d",fe);
return 0;
}