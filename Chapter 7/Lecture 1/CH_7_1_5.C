#include<stdio.h>
#include<conio.h>
main()
{
	int a,n;
	clrscr();
	a=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("odd numbers from 1 to %d:\n",a);
	while(a<=n)
	{
	if(a%2!=0)
	printf ("%d",a);
	a++;
	}
	getch();
}
