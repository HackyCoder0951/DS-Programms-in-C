#include<stdio.h>
#include<conio.h>
void main()
	{
		int a=15;
		int *p;
		clrscr();
		p=&a;
		printf("Value of A is:%d",a);
		printf("\nAddress of A is:%u",&a);
		printf("\nValue of P is:%u",p);
		printf("\nAddress of P is:%u",&p);
		printf("\nValue pointed by P:%d",*p);
	getch();
	}