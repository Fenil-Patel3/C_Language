#include<stdio.h>
main()
 {
 
    int i,j,s;
    
	for(i=1;i<=5;i++)
    {
    	for(s=1;s<i;s++)
    	{
    		printf(" ");
		}
		for(j=1;j<=5;j++)
		{
			if((i+j)%2==0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
    	}
		printf("\n");
	}
}
