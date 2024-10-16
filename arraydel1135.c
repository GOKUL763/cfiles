#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int removeDuplicates(int a[], int N) {
	if (N == 0) {
        return 0;
    }
    int i=0,j;
    for(j=1;j<N;j++)
    {
    	if(a[i]!=a[j])
    	{
    		i++;
    		a[i]=a[j];
		}
	}
	printf("\n%d",i+1);
	return i+1;
}




int comp(const void* a,const void* b)
{
	return(*(int*)a-*(int*)b);
}




int main()
{
	
	int i,j,f,s=0,n,t=0,sz;
	printf("Enter array size :");
	scanf("%d",&sz);
	int a[sz];
	for(i=0;i<sz;i++)
	{
		printf(" %3d :",i+1);
		scanf("%d",&a[i]);
	}
	
	n=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	
	printf("\n\n");
	qsort(a,n,sizeof(int),comp);
	
	
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	
	i=0;
	
	int nl=removeDuplicates(a,n);

	
	printf("\n\n");
	for(i=0;i<nl;i++)
	{
		printf("%4d",a[i]);
	}
	
	return 0;
}
