#include<stdio.h>
#include<conio.h>

main()
{
  int x,y,z;
  clrscr();
  printf("enter the value x:");
  scanf("%d",&x);
  printf("enter the value y:");
  scanf("%d",&y);
  z=(x*x*x)-(3*x*x*y)+(3*x*y*y)-(y*y*y);
  printf("the sum is :%d",z);
  getch();
}