#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int class1[10],class2[10],class3[10];
	int pass1=0, pass2=0 , pass3=0;
	int fail1=0, fail2=0 ,fail3=0;
	int max1, max2, max3;
	int min1, min2 ,min3;
	int sum1=0 ,sum2=0 ,sum3=0;
	
	for(int i=0; i<10; i++)
	{
		printf("Enter the grades of the first class and student no. %d: ",i+1);
		scanf("%d",&class1[i]);
	}
	for(int i=0; i<10; i++)
	{
		printf("Enter the grades of the second class and student no. %d: ",i+1);
		scanf("%d",&class2[i]);
	}
	for(int i=0; i<10; i++)
	{
		printf("Enter the grades of the third class and student no. %d: ",i+1);
		scanf("%d",&class3[i]);
	}
	
	
	for(int i=0; i<10; i++)
	{
		if(class1[i]>=50)
		{
			++fail1;
			++pass1 ;
		}
		if(class2[i]>=50)
		{
			++fail2;
			++pass2;
		}
		if(class3[i]>=50)
		{
			++fail3;
			++pass3;
		}
	}
	printf("The number of passed Students in the first class = %d\n",pass1);
	printf("The number of passed Students in the second class = %d\n",pass2);
	printf("The number of passed Students in the third class = %d\n",pass3);
	printf("The number of failed Students in the first class = %d\n",fail1);
	printf("The number of failed Students in the second class = %d\n",fail2);
	printf("The number of failed Students in the third class = %d\n",fail3);
	
	max1=class1[0];
	min1=class1[0];
	max2=class2[0];
	min2=class2[0];
	max3=class3[0];
	min3=class3[0];
	for(int i=0; i<10; i++)
	{
		if(max1<class1[i])
			max1=class1[i];
		else
			min1=class1[i];
		
		if(max2<class2[i])
			max2=class2[i];
		else
			min2=class2[i];
		
		if(max3<class3[i])
			max3=class3[i];
		else
			min3=class3[i];	
		
		sum1+=class1[i];
		sum2+=class2[i];
		sum3+=class3[i];
	}
	printf("The hieghest grade of the first class = %d\n",max1);
	printf("The lowest grade of the first class = %d\n ",min1);
	printf("The hieghest grade of the second class = %d\n ",max2);
	printf("The lowest grade of the second class = %d\n ",min2);
	printf("The hieghest grade of the third class = %d\n",max3);
	printf("The lowest grade of the third class = %d\n ",min3);
	printf("The average grade of the first class = %f\n",sum1/10.0);
	printf("The average grade of the second class = %f\n",sum2/10.0);
	printf("The average grade of the third class = %f\n",sum3/10.0);
}