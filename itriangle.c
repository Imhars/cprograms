#include <stdio.h>
int main()
{
    int i,j,col=5,row=5;
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=col;j++)
        {
            if (j<i)
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
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=col;j++)
        {
            if (j<i)
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
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=row;j++)
        {
            if (j<col)
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