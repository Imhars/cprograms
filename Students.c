#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20], div;
    int roll_no,age;
    float number;
    printf("Enter Name: ");
    gets(name);
    printf("\n Enter Roll No:");
    scanf("%d",&roll_no);
    printf("\n Enter Age: ");
    scanf("%d",&age);
    printf("\n Enter Number: ");
    scanf("%f",&number);
    printf("\n Students Details \n");
    printf(" Student name is ");
    puts(name);
    printf("and roll no is %d. Student is in div %c. Age of the student is %d. Contact: %f", roll_no,age,number);
    return 0;
}