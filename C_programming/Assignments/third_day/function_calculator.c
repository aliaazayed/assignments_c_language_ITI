#include <stdio.h>
#include <stdlib.h>

void sum(int n1, int n2);
void sub(int n1, int n2);
void multi(int n1, int n2);
void divide(int n1, int n2);
void And(int n1, int n2);
void Or(int n1, int n2);
void Not(int n1);
void Xor(int n1, int n2);
void reminder(int n1, int n2);
void increament(int n1);
void decrement(int n1);

void main(void)
{
	int id,n1,n2;
	
	printf("Enter the operation id ");
	scanf("%d",&id);
	switch(id)
	{
		case 1:printf("Enter two operand ");
	           scanf("%d %d",&n1,&n2);
		       sum(n1,n2);
			   break;
	    case 2:printf("Enter two operand ");
	           scanf("%d %d",&n1,&n2);
		       sub(n1,n2);
			   break;
	    case 3:printf("Enter two operand ");
	           scanf("%d %d",&n1,&n2);
		       multi(n1,n2);
			   break;
		case 4:printf("Enter two operand ");
	           scanf("%d %d",&n1,&n2);
		       divide(n1,n2);
			   break;
	    case 5:printf("Enter two operand ");
	           scanf("%d %d",&n1,&n2);
		       And(n1,n2);
			   break;
	    case 6:printf("Enter two operand ");
	           scanf("%d %d",&n1,&n2);
		       Or(n1,n2);
			   break;
		case 7:printf("Enter  one operand ");
	           scanf("%d",&n1);
		       Not(n1);
			   break;
	    case 8:printf("Enter two operand ");
	           scanf("%d %d",&n1,&n2);
		       Xor(n1,n2);
			   break;
	    case 9:printf("Enter two operand ");
	           scanf("%d %d",&n1,&n2);
		       reminder(n1,n2);
			   break;
		case 10:printf("Enter one operand ");
	           scanf("%d",&n1);
		       increament(n1);
			   break;
	    case 11:printf("Enter one operand ");
	           scanf("%d",&n1);
		       decrement(n1);
			   break;
        default:printf("An invalid ID");
			   break;
			   	   	   	   	   	   	   	   
		       
	}
}

void sum (int n1,int n2)
{
	printf("The summation = %d",n1+n2);
}

void sub (int n1,int n2)
{
	printf("The subtraction = %d",n1-n2);
}

void multi(int n1, int n2)
{
	printf("The multiplication = %d",n1*n2);
}
void divide(int n1, int n2)
{
	printf("The dividition = %d",n1/n2);
}
void And(int n1, int n2)
{
	printf("The and = %d",n1&n2);
}
void Or(int n1, int n2)
{
	printf("The or = %d",n1|n2);
}
void Not(int n1)
{
	printf("The not = %d",!n1);
}
void Xor(int n1, int n2)
{
	printf("The xor = %d",n1^n2);
}
void reminder(int n1, int n2)
{
	printf("The reminder = %d",n1%n2);
}
void increament(int n1)
{
	printf("The increment = %d",++n1);
}
void decrement(int n1)
{
	printf("The decrement = %d",--n1);
}
