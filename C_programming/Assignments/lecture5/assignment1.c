#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int arr[10], max,min;
	for(int i=0; i<10; i++)
	{  
        printf("Enter the value %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(int i=0; i<10; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
			min=arr[i];
	}
	printf("The Maximum number = %d\n",max);
	printf("The Miinimum number = %d",min);
}