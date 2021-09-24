#include<stdio.h>
struct person
{
    char name[20];
    float sal;
}p1,p2,p3;
int main()
{
    struct person*ptr,ptr2,ptr3;
    ptr=&p1;
    printf("enter a name\n");
    scanf("%s",&ptr->name);
    printf("enter your ammount\n");
    scanf("%f",&ptr->sal);
    printf("hello\n%s\n",(*ptr).name);
    printf("amount:%0.0f\n",ptr->sal);



return 0;
}