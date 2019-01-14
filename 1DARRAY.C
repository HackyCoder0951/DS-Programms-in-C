#include<stdio.h>
#include<conio.h>
void main()
	{
		int i;
		int RollNo[5]={10,20,30,40,50};
		clrscr();
		for(i=0;i<5;i++)
			{
				printf("Value of RollNo[%d] is %d\n",i,RollNo[i]);
			}
		getch();
	}
