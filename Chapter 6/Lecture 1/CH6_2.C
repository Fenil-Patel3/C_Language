#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    clrscr();
    printf("enter the value of n :");
    scanf("%d",&n);
    if(n>0)
    {
       printf("postive number");
    }
    else if(n<0)
    {
       printf("negative number");
    }
    else if(n==0)
    {
       printf("this is not a number:");
    }
    getch();
}