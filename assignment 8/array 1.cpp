#include<stdio.h>
int main()
{
	int arr[5],i;
	int min,max;
	
	printf("enter the element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	min= arr[0];
	max= arr[0];
	
	for(i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	printf("minimum = %d\n",min);
	printf("maximum = %d\n",max);
}
