#include<stdio.h>
#include<conio.h>
struct Student
{
  int roll;
  char name[20];
  float fee;  
};
int main()
{

    struct Student s1,s2;
    printf("Enter roll number , Name , fee \n");
    scanf("%d %s %f",&s1.roll,&s1.name,&s1.fee);
    printf("Hello %s Your roll number is %d and Your fee is %0.2f",s1.name,s1.roll,s1.fee);
    return 0;

}