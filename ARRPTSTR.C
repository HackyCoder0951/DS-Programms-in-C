#include<stdio.h>
#include<conio.h>
#include<string.h>
const int MAX=4;
int main()
	{
		char *Name[]={"Hello","C","Programming","Language"};
		int i=0;
		clrscr();
		for(i=0;i<MAX;i++)
			{
				printf("Value of Names[%d]=%s\n",i,Name[i]);
			}
			for(i=0;i<MAX;i++)
				{
					printf("Address of given value of Names[%d]=%u\n",i,&Name[i]);
				}
		getch();
		return 0;
	}