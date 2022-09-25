#include <stdio.h>
#include <stdlib.h>


void main(void)
{
   int id,password, count=0;
	
	printf("Enter his ID ");
	scanf("%d",&id);
	
	switch(id)
	{
		case 1234: printf("please Enter your password ");
          		   for(int i=0; i<3 ; i++)
		           {
		             scanf("%d",&password);
		             if(password==7788){
		            	printf("Welcome Ahmed");
						count++;
						break;
					 }
		           else
			          printf("try again ");
				   }
				   if(!count)
					   printf("Incorrect password for 3 times. No more tries");
		break;
		
		case 5678: printf("please Enter your password ");
          		   for(int i=0; i<3 ; i++)
		           {
		             scanf("%d",&password);
		             if(password==5566){
		            	printf("Welcome Amr");
						count++;
						break;
					 }
		           else
			          printf("try again ");
				   }
				   if(!count)
					   printf("Incorrect password for 3 times. No more tries");
		break;
		
		case 9870: printf("please Enter your password ");
          		   for(int i=0; i<3 ; i++)
		           {
		             scanf("%d",&password);
		             if(password==1122){
		            	printf("Welcome Wael");
						count++;
						break;
					 }
		           else
			          printf("try again ");
				   }
				   if(!count)
					   printf("Incorrect password for 3 times. No more tries");
		break;
		
		default : printf("IYou are not registered ");
		
	}
}