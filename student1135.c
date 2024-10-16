#include<stdio.h>
#include<stdlib.h>

int comp(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);	
}
int main()
{
    int n1,n2,i,f=0;
    printf("Array size a :");
    scanf("%d",&n1);
    int a[n1];
    
    for(i=0;i<n1;i++)
    {
    	printf(" %3d : ",i+1);
    	scanf("%d",&a[i]);	
	}
    printf("Array size b :");
    scanf("%d",&n2);
    int b[n2];
    
    for(i=0;i<n2;i++)
    {
    	printf(" %3d : ",i+1);
    	scanf("%d",&b[i]);	
	}
	int m[n1+n2];
	
	for(i=0;i<n1;i++)
	{
		m[i]=a[i];
		printf("%3d",m[i]);
	}
	
	for(i=n1;i<n1+n2;i++)
	{
		m[i]=b[f];
		printf("%3d",m[i]);
		f++;
	}
	
	qsort(m,n1+n2,sizeof(int),comp);
	printf("\n\n");
	
	for(i=0;i<n1+n2;i++)
	{
		printf("%3d",m[i]);
	}
}