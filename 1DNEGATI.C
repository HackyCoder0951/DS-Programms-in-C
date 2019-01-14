#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
	{
		int arr[MAX];
		int i,N;
		clrscr();
		printf("Enter the size of Array:");
		scanf("%d",&N);
		for(i=0;i<N;i++)
			{
				printf("Enter the element of Array:");
				scanf("%d",&arr[i]);
			}
			printf("Printf all Negative Values");
			for(i=0;i<N;i++)
				{
					if(arr[i]<0)
						{
							printf("\n%d",arr[i]);
						}
				}
		getch();
	}