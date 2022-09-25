#include <stdio.h>
#include <stdlib.h>
void swap(int *p,int *q,int *r);

void main(void)
{
	int x=4,y=5,z=7;
	int *p, *q,*r;
	p= &x;
	q= &y;
	r= &z;
	
	printf("x= %d\ny= %d\nz= %d\n",x,y,z);
	printf("p= %p\nq= %p\nr= %p\n",p,q,r);
	printf("*p= %d\n*q= %d\n*r= %d\n",*p,*q,*r);
	swap(p,q,r);
	printf("x= %d\ny= %d\nz= %d\n",x,y,z);
	printf("p= %p\nq= %p\nr= %p\n",p,q,r);
	printf("*p= %d\n*q= %d\n*r= %d\n",*p,*q,*r);
}

void swap(int *p,int *q,int *r)
{
	printf("Before swaping: *p= %d\n*q= %d\n*r= %d\n",*p,*q,*r);
	int temp;
	temp=*r;
	*r=*p;
	*p=*q;
	*q=temp;
	printf("After swaping: *p= %d\n*q= %d\n*r= %d\n",*p,*q,*r);
	
}