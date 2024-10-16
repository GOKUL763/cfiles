#include<stdio.h>
#include<stdlib.h>


int binsch(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(arr[mid]==x)
			return mid;
		
		if(arr[mid]<x)
			low=mid+1;
			
		else
			high=mid-1;
		
	}
	return -1;
}

int comp(void const*a,void const*b)
{
	return (*(int*)a-*(int*)b);
}


int main()
{
	int n,i,j,f,t,sch,sc,bs;
	printf("Enter array size :");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("%5d : ",i+1);
		scanf("%d",&a[i]);
		
	}
	qsort(a,n,sizeof(int),comp);
	
	
	printf("\n ");
	for(i=0;i<n;i++)
	{
		printf("%4d",i);
		if(i>0&&i<n-1)
		{
			printf(" ");
		}
	}
	printf("  ");
	
	
	printf("\n[");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
		if(i>0&&i<n-1)
		{
			printf(",");
		}
	}
	printf(" ]");
	
	printf("\nEnter element to search : ");
	scanf("%d",&sch);
	
	for(i=0;i<n;i++)
	{
		if(sch==a[i])
		{
			sc=1;
			printf("\nElement is present at index : ");
		}
		if(sc==1)
			{
				break;
			}
		else
		{
			continue;
		}
	}
	if(sc!=1)
	{
		printf("\nElement is not present in array");
		return 0;
	}
	
	bs=binsch(a,0,n-1,sch);
	
	printf("%2d",bs);
}
