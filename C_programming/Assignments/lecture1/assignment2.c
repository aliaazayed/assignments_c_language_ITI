#include <stdio.h>
#include <stdlib.h>
   


void fun (int* x, int* y)
{
   int *temp;
   temp= y;
   y=x;
   x=temp;
}
int main()
{
    int a=2016, b=0, c=4, d=42;
    fun(&a, &b);
    if(a<c)
        fun (&a, &c);
    fun(&a, &d);
    printf("%d",a);
    return 0;
}
/***

void main(void)
{
	
	
	int n1,n2,n3;
	printf("Please Enter number 1: ");
	scanf("%d",&n1);
	printf("Please Enter number 2: ");
	scanf("%d",&n2);
	printf("Please Enter number 3: ");
	scanf("%d",&n3);
	printf("number 3: %d\n",n3);
	printf("number 2: %d\n ",n2);
	printf("number 1: %d\n",n1);
	


}
	
**/