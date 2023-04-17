#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,n,sum=0;
	clrscr();
	printf("enter the value of n:");
	scanf("%d",&n);
	while(a<=n)
	{
	sum=sum+a+n;
	++a;
	}
	printf("%d",sum);
	getch();
}
