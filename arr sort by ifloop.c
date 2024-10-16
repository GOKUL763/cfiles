#include<stdio.h>

int main()
{
	int n,i,j,f,t,s;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("%3d : ",i+1);
		scanf("%d",&a[i]);
	}
	n=sizeof(a)/sizeof(a[0]);
	
	printf("\n[");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
        if(i>=0&&i<n-1)
        {
        	printf(",");
        }
    }
    printf("]\n");
    
    
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
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
        if(i>=0&&i<n-1)
        {
        	printf(",");
        }
    }
    printf("]\n");
    
    printf("\n\nREVERSED :\n[");
    for(i=n-1;i>=0;i--)
    {
        printf("%2d",a[i]);
        if(i>0&&i<n)
        {
        	printf(",");
        }
    }
    printf("]\n");
}
