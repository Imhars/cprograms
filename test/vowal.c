#include<stdio.h>
int main()
{
char ch;
printf("Enter one character\n");
scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u')
{
    printf("charather is vowal");
}
else
{
    printf("charather is con");
}
 return 0;
}