#include <stdio.h>
#include <stdlib.h>
void max(int n1, int n2, int n3, int n4);
void min(int n1, int n2, int n3, int n4);

void main(void)
{
	int n1,n2,n3,n4;
	printf("Enter the four values");
	scanf(" %d %d %d %d",&n1,&n2,&n3,&n4);
	max(n1,n2,n3,n4);
	min(n1,n2,n3,n4);
	
}


void max(int n1, int n2, int n3, int n4)
{
	if(n1>=n2 && n1>=n3 &&n1>=n4)
		printf("The Maximum %d", n1);
	else if(n2>=n1 && n2>=n3 &&n2>=n4)
		printf("The Maximum %d", n2);
	else if(n3>=n1 && n3>=n2 &&n3>=n4)
		printf("The Maximum %d", n3);
    else
		printf("The maxium %d", n4);
	printf("\n");
}
void min(int n1, int n2, int n3, int n4)
{
	if(n1<=n2 && n1<=n3 &&n1<=n4)
		printf("The Minimum %d", n1);
	else if(n2<=n1 && n2<=n3 &&n2<=n4)
		printf("The Minimum %d", n2);
	else if(n3<=n1 && n3<=n2 &&n3<=n4)
		printf("The Minimum %d", n3);
    else
		printf("The Minum %d", n4);
    printf("\n");
}