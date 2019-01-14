#include<stdio.h>
#include<conio.h>
void main()
	{
		int a[2][2],b[2][2],c[2][2];
		int i,j;
		clrscr();
		printf("Enter the first matrix element value:");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						scanf("%d",&a[i][j]);
					}
			}
		printf("Enter the second matrix element value:");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						scanf("%d",&b[i][j]);
					}
			}
		//Adding of Matrix
		printf("Sum of matrix element is\n");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
						printf("\t%d",c[i][j]);
					}
					printf("\n");
			}
		//Substraction of 2D Matrix
		printf("Sub of matrix element is\n");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						c[i][j]=a[i][j]-b[i][j];
						printf("\t%d",c[i][j]);
					}
					printf("\n");
			}
		//Multiplication of 2D Matrix
		printf("Mult of matrix element is\n");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						c[i][j]=a[i][j]*b[i][j];
						printf("\t%d",c[i][j]);
					}
					printf("\n");
			}
		getch();
	}