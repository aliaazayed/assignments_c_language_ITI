#include <stdio.h>
#include <stdlib.h>


void main(void)
{	
	int id,password;
	
	printf("Enter his ID ");
	scanf("%d",&id);
	
	switch(id)
	{
		case 1234: printf("Enter your password ");
		           scanf("%d",&password);
		           if(password==12)
		            	printf("Aliaa");
		           else
			          printf("Incorrect password");
		break;
		
		case 5678: printf("Enter your password ");
		           scanf("%d",&password);
		           if(password==56)
		            	printf("Youssef");
		           else
			          printf("Incorrect password ");
		break;
		
		case 9999: printf("Enter your password ");
		           scanf("%d",&password);
		           if(password==99)
		            	printf("Asmaa");
		           else
			          printf("Incorrect password");
		break;
		
		default : printf("Incorrect ID ");
		
	}
	
}