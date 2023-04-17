#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n,fact=1;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n);
	while(a<=n)
	{
		fact=fact*a;
		a++;
	 }
	 printf("the factorial of is%d",fact);
	getch();
}