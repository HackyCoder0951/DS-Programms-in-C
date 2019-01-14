#include<stdio.h>
#include<conio.h>
void main()
	{
		int a[2][2][2],b[2][2][2],c[2][2][2];
		int i,j,k;
		clrscr();
		printf("Enter the first matrix element value:");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						for(k=0;k<2;k++)
							{
								scanf("%d",&a[i][j][k]);
							}
					}
			}
		printf("Enter the second matrix element value:");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						for(k=0;k<2;k++)
							{
								scanf("%d",&b[i][j][k]);
							}
					}
			}
		//Adding of 3D Matrix
		printf("Sum of matrix element is\n");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						for(k=0;k<2;k++)
							{
								c[i][j][k]=a[i][j][k]+b[i][j][k];
								printf("\t%d",c[i][j][k]);
							}
					}
					printf("\n");
			}
		//Substraction of 3D Matrix
		printf("Sub of matrix element is\n");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						for(k=0;k<2;k++)
							{
								c[i][j][k]=a[i][j][k]-b[i][j][k];
								printf("\t%d",c[i][j][k]);
							}
					}
					printf("\n");
			}
		//Multiplication of 3D Matrix
		printf("Mult of matrix element is\n");
		for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
					{
						for(k=0;k<2;k++)
							{
								c[i][j][k]=a[i][j][k]*b[i][j][k];
								printf("\t%d",c[i][j][k]);
							}
					}
					printf("\n");
			}
		getch();
	}