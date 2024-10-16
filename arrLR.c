#include<stdio.h>
#include<stdlib.h>

int comp(const void* a,const void* b)
{
	return(*(int*)a-*(int*)b);
}


int main()
{
    int n,i,j,s,t;
    int c;
	printf("Enter array SIZE :");
    scanf("%d",&n);
    if(n<=0)
    {
    	printf("Invalid Input.");
    	return 0;
    }
    int a[n];
    for(i=0;i<n;i++)
    {
    	printf("%4d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    
    printf("\nUNSORTED ARRAY :\n[");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
        if(i>=0&&i<n-1)
        {
        	printf(",");
        }
    }
    printf("]\n\n");
    
    
    qsort(a,n,sizeof(int),comp);
    
    
    printf("\nSORTED ARRAY :\n[");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
        if(i>=0&&i<n-1)
        {
        	printf(",");
        }
    }
    printf("]\n\n");
    
    printf("1 - Left cycle\n2 - Right cycle");
    printf("\nEnter (1/2) :");
    
    scanf("%d",&c);
    
    if(c==1)
    {
    	t=a[0];
    	for(i=0;i<n;i++)
    	{
    		a[i]=a[i+1];
    		if(i==n-1)
    		{
    			a[i]=t;
    		}
    	}
    }
    
    else if(c==2)
    {
    	t=a[n-1];
    	for(i=n-1;i>=0;i--)
    	{
    		a[i+1]=a[i];
    		if(i==0)
    		{
    			a[i]=t;
    		}
    	}
    }
    else
    {
    	printf("Invalid Input.");
    	return 0;
    }
    printf("\nAFTER CYCLE:\n[");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
        if(i>=0&&i<n-1)
        {
        	printf(",");
        }
    }
    printf("]\n\n");
    
    
    return 0;
}
