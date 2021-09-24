#include<stdio.h>
#include<conio.h>
#include<string.h>  
int main()
{
    int uvalue,pvalue;
    char uname[20]={'v','i','k','a','s'};
    char pass[20]={'1','2','3','4','5'};
    char username[20],password[20];
    printf("Enter Username\n");
    gets(username);
    printf("Enter Password\n");
    gets(password);
    uvalue=strcmp(username,uname);
    pvalue=strcmp(password,pass);
    if(uvalue==0 && pvalue==0)
    {
        printf("Login");
    }
    else
    {
        printf("Login Failed");
    }
    return 0;
}