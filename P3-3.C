#include<stdio.h>
void sort(int *a, int n);
void main()
{
	int arr[10],n,i;
	clrscr();
	printf("\n enter value of n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	getch();
}
void sort(int *a, int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n The sorted values are :");
	for(i=0;i<n;i++)
	{
		printf("\n %d ",a[i]);
	}

}