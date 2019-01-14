#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2],b[2],c[2];
	int i;
	clrscr();
	printf("Enter the first array element value:");
	for(i=0;i<2;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Enter the second array element value:");
	for(i=0;i<2;i++)
		{
			scanf("%d",&b[i]);
		}
	//Addition of two 1d array
	printf("Sum of array element is\n");
	for(i=0;i<2;i++)
		{
			c[i]=a[i]+b[i];
			printf("\t%d",c[i]);
		}
		printf("\n");
	//Substraction of two 1d array
	printf("Sub of array element is\n");
	for(i=0;i<2;i++)
		{
			c[i]=a[i]-b[i];
			printf("\t%d",c[i]);
		}
		printf("\n");
	//Multiplication of two 1d array
	printf("Mult of array element is\n");
	for(i=0;i<2;i++)
		{
			c[i]=a[i]*b[i];
			printf("\t%d",c[i]);
		}
		printf("\n");
	getch();
}