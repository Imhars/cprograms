#include<stdio.h>

struct person
{
    char name[20];
    float sal;
   // int num;
}p1,p2,p3;
int main()
{
    //struct p1,p2,p3;
    struct person*ptr,sum;
    ptr=&p1;
    printf("enter a name\n");
    scanf("%s",&ptr->name);
    printf("enter a ammount\n");
    scanf("%f",&ptr->sal);
    ptr->sal=ptr->sal*2;
    //printf("kaisa hai\n%s\n",(*ptr).name);
    //printf("tera paisa\n");
    printf("tera paisa =%0.0f\n",ptr->sal);
    //=ptr->sal*2;


    return 0;
}