#include <stdio.h>
#include <stdlib.h>

void swap (int *x, int *y);

void main(void){
	int x=6,y=7;
	swap(&x, &y);
	
	printf("After Swaping x= %d & y= %d", x,y);
	
	
	int arr[5]={12,3, 6,7,8};
	int *ptr &arr[0];
	
	/***
    for(int i=0; i<5; i++)
	{
	*(ptr+i)=arr[i];
    }
	******/
    for(int i=0; i<5; i++)
	{
	  printf("%d",*(ptr+i));
    }
    	
}


void swap (int *x, int *y)
{
	int temp =*x;
	*x=*y;
	*y= temp;
}