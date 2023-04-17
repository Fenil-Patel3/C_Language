#include<stdio.h>
#include<conio.h>

main()
{
    int a,b;
    clrscr();
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    if(a<b)
    {
       printf("a is less...");
    }
    else
    {
       printf("b is less...");
    }
    getch();
}