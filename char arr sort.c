#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
	int n,i,j,t;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	char c[n];
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("%3d : ",i+1);
		scanf("%s",&c[i]);
	}
	
	printf("\n[");
    for(i=0;i<n;i++)
    {
        printf("%2c",c[i]);
        if(i>=0&&i<n-1)
        {
        	printf(",");
        }
    }
    printf(" ]\n");
    
    printf("\n[");
    for(i=0;i<n;i++)
    {
        printf("%2d",(int)c[i]);
        if(i>=0&&i<n-1)
        {
        	printf(",");
        }
    }
    printf(" ]\n");
    
    for(i=0;i<n;i++)
    {
    	a[i]=(int)c[i];
    }
    
    for(j=0;j<n;j++){
    
    for(i=0;i<n;i++)
    {
    	if(a[i]>a[i+1])
    		{
    			t=a[i];
    			a[i]=a[i+1];
    			a[i+1]=t;
    			
    		}
    	}
	}
	
	printf("\n\nSORTED :\n[");
    for(i=1;i<=n;i++)
    {
        printf("%2d",a[i]);
        if(i>0&&i<=n-1)
        {
        	printf(",");
        }
    }
    printf("]\n");
	
	printf("\n[");
    for(i=1;i<=n;i++)
    {
        printf("%2c",(char)a[i]);
        if(i>0&&i<=n-1)
        {
        	printf(",");
        }
    }
    printf(" ]\n");
}

