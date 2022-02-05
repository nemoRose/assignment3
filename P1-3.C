#include<stdio.h>
void swap(int n1, int n2);
void main()
{
	int num1,num2;
	clrscr();
	printf("\n Enter num1 and num2 :");
	scanf("%d %d",&num1,&num2);
	swap(num1,num2);
	getch();
}
void swap(int n1, int n2)
{
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\n swapped numbers are :  %d  %d",n1,n2);
}