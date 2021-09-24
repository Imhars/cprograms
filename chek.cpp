#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,sum,total=50;
int per;
printf("enter marks for  5 subjects:");
scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
sum=s1+s2+s3+s4+s5;
printf("sum=%d",sum);
per=(sum*100)/total;
printf("perstange=%f");
}

