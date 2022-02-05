#include<stdio.h>
void check(char *str);
void main()
{
	char *sr;
	clrscr();
	printf("\nEnter the string:");
	gets(sr);
	check(sr);
	getch();
}
void check(char *str)
{
       int i;
       for(i=0;str[i]!='\0';i++)
       {
		if(str[i]>=33 && str[i]<=47 || str[i]>=58 && str[i]<=64 || str[i]>=91 && str[i]<=96)
		{
			continue;
		}
		else
		{
			printf("%c",str[i]);
		}
       }

}