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
  z=(x*x)-(2*x*y)+(y*y);
  printf("the sum is :%d",z);
  getch();
}