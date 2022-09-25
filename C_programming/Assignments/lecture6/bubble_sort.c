#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y);
void buble(int arr[],int n);
void printArray(int arr[], int size);

void main(void)
{
	int arr[]={50,60,100,6, 90,5,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	buble(arr,n);
	printf("Sorted Array\n");
	printArray(arr,n);
}

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void buble(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		fvoid printArray(int arr[], int size);or(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}
void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}