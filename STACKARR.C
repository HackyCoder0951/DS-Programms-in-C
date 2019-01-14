#include<stdio.h>
#include<conio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void peep();
void display();
void main ()
{
	 clrscr();
	 printf("Enter the number of elements in the stack ");
	 scanf("%d",&n);
	 printf("*********Stack operations using array*********");
	 printf("\n----------------------------------------------\n");
	 while(choice != 5)
	 {
		  printf("\nChose one from the below options...\n");
		  printf("\n1.Push\n2.Pop\n3.Peep\n4.Show\n5.Exit");
		  printf("\nEnter your choice:");
		  scanf("%d",&choice);
		  switch(choice)
		  {
				case 1:
				{
					 push();
					 break;
				}
				case 2:
				{
					 pop();
					 break;
				}
				case 3:
				{
					printf("Top Element of Stack is = %d",stack[top]);
					break;
				}
				case 4:
				{
					 display();
					 break;
				}
				case 5:
				{
					 printf("");
					 break;
				}
				default:
				{
					 printf("Please Enter valid choice ");
				}
		  };
	 }
}

void push ()
{
	 int val;
	 if (top == n )
	 printf("\nStack is Overflow");
	 else
	 {
		  printf("Enter the value?");
		  scanf("%d",&val);
		  top = top +1;
		  stack[top] = val;
	 }
}
void pop ()
{
	 if(top == -1)
	 printf("Stack is Underflow");
	 else
	 top = top -1;
}
void display()
{
	 for (i=top;i>=0;i--)
	 {
		  printf("%d\n",stack[i]);
	 }
	 if(top == -1)
	 {
		  printf("Stack is empty");
	 }
}