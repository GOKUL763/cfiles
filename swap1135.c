#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,t,s;
	printf("Enter Array Size :");
	scanf("%d",&n);
	
	
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("%4d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\n[");
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
		if(i>=0&&i<n-1)
		{
			printf(",");
		}
	}
	printf(" ]");
	printf("\nFirst Half :");
	for(i=0,j=(n/2)-1;i<(n/4);i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("\n[");
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
		if(i>=0&&i<n-1)
		{
			printf(",");
		}
	}
	printf(" ]");
	
	
	printf("\nSecond Half :");
	for(i=n/2,j=n-1;i<j;i++,j--)
	{
		t=b[i];
		b[i]=b[j];
		b[j]=t;
	}
	printf("\n[");
	for(i=0;i<n;i++)
	{
		printf("%2d",b[i]);
		if(i>=0&&i<n-1)
		{
			printf(",");
		}
	}
	printf(" ]");
	
	
}
