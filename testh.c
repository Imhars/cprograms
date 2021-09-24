#include <stdio.h>
int main()
{
int i,j,row=5,col=5;
for(i=1;i<=row;i++)
{
    for(j=1;j<=row;j++)
    {
       if(i>1&&j>1&&i<row&&j<col)
       {
            printf("  ");
        }
       else
       {
           printf("* ");
       } 
    }
    printf("\n");
}
  return 0;
}