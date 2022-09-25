#include <stdio.h>
#include <stdlib.h>


void main(void)
{
	
	int array[10];
	int val,count=0;
	for(int i=0; i<10; i++)
	{
		printf("Enter Number %d:", i+1);
		scanf("%d",&array[i]);
	}
	printf("Enter the value to search:");
	scanf("%d",&val);
	for(int i=0; i<10; i++)
	{
		if(array[i]==val)
		{
			printf("Value is exist at element number %d",i+1);
			count++;
		}
	}
	if(!count)
		printf("Value not exist");
	
}