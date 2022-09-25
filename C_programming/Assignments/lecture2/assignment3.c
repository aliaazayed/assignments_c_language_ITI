#include <stdio.h>
#include <stdlib.h>


void main(void)
{	
	int n1, n2, n3;
	
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	printf("Enter number 3:");
	scanf("%d",&n3);
	
	if(n1>=n2 && n1>=n3)
		printf("Maximum number is %d ",n1);
	else if(n2>=n3 && n2>=n3)
		printf("Maximum number is %d ",n2);
	else
		printf("Maximum number is %d ",n3);
 
 
}