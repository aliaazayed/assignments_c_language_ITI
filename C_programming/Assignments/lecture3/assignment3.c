#include <stdio.h>
#include <stdlib.h>


void main(void)
{  
   int height, star=1;
   printf("Please Enter the height of the pyrimed  ");
   scanf("%d",&height);
   
   for(int i=0; i<height ; i++)
   {
    for(int j= height-1; j>=i;j--)
	{
     printf(" ");
	}
	 for(int j=0 ; j<star;j++)
	{
     printf("*");
	}
    printf("\n");
	star=star+2;
   }	
}