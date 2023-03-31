#include<stdio.h>
#include<conio.h>
main()
{
	int a,n;
	clrscr();
	printf("enter a n:");
	scanf("%d",&n);
	printf("even numbers from n to %d:\n",n);
	while(n>=1)
	{
		if(n%2==0)
		printf("%d",n);
		n--;
	 }
	getch();
}