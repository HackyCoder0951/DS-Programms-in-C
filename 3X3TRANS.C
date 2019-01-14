#include<stdio.h>
#include<conio.h>
int main()
	{
		int a[10][10],transpose[10][10],r,c,i,j;
		clrscr();
		printf("Enter rows and column of matrix:");
		scanf("%d %d",&r,&c);
		printf("\nEnter the element of matrix:\n");
		for(i=0;i<r;++i)
			{
				for(j=0;j<c;++j)
					{
						printf("Enter the a%d%d:",i+1,j+1);
						scanf("%d",&a[i][j]);
					}
			}
		printf("\nEntered Matrix: \n");
		for(i=0;i<r;++i)
			{
				for(j=0;j<c;++j)
					{
						printf("\t%d\t",a[i][j]);
						if(j==c-1)
							printf("\n\n");
					}
			}
		for(i=0;i<r;++i)
			{
				for(j=0;j<c;++j)
				{
					transpose[j][i]=a[i][j];
				}
			}
		printf("\nTranspose of Matrix:\n");
		for(i=0;i<c;++i)
			{
				for(j=0;j<r;++j)
					{
						printf("\t%d\t",transpose[i][j]);
						if(j==r-1)
							printf("\n\n");
					}
			}
		getch();
		return 0;
	}
