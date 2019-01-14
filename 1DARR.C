#include<stdio.h>
#include<conio.h>
void main()
	{
		int RollNo[5],i;
		clrscr();
		for(i=0;i<5;i++)
			{
				printf("Enter The Array element %d:",i);
				scanf("%d",&RollNo[i]);
			}
			for(i=0;i<5;i++)
				{
					printf("\nYou Entered Elements:%d",RollNo[i]);
				}
		getch();
	}