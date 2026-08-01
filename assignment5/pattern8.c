#include<stdio.h>

int main()
{
	int n=4;
	int i,j;
	
	//upper part
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	
	//lower part
	for(i=n-1;i>=n;i--)
	
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	return 0;
}
	
	