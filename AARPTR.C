#include<stdio.h>
#include<conio.h>
const int MAX=3;
int main()
	{
		int var[]={10,100,200};
		int i,*ptr[3];
		clrscr();
		for(i=0;i<MAX;i++)
			{
				ptr[i]=&var[i];
			}
			for(i=0;i<MAX;i++)
				{
					printf("Value of VAR[%d]=%d\n",i,*ptr[i]);
					printf("Address of given value of VAR[%d]=%u\n",i,&ptr[i]);
				}
		getch();
		return 0;
	}