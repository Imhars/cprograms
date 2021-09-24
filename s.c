#include<stdio.h>
struct person
{
    char name[20];
    float sal;
};

int main()
{
    struct person p1,p2,p3;
    struct person*ptr;
    ptr=&p1;
    printf("enter a name\n");
    scanf("%s",&ptr->name);
    printf("enter a Salary\n");
    scanf("%f",&ptr->sal);
    printf("Hello %s \n",(*ptr).name);
    printf("Salary: %0.0f \n",ptr->sal);
    return 0;
}
