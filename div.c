#include<stdio.h>

#include<conio.h>

void main()
{
int i,sum=0;
clrscr();
for(i=0;i<=100;i++)
{
if(i%4==0)                                                              
sum=sum+i;
}

printf(ā\naddition of numbers from 0 to 100 that are divisible by 4 is\n%dā,sum);
getch();
}
return 0}