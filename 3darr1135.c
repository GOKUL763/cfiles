#include<stdio.h>
#define MAX 100
int main()
{
	int a[MAX][MAX],b[MAX][MAX],p[MAX][MAX];
	int ar,ac,br,bc,sum=0,i,j,k;
	
	printf("Enter the rows and columns of matrix a:");
	scanf("%d %d",&ar,&ac);
	
	printf("Enter the element of the matrix a:\n");
	for(i=0;i<ar;i++)
	{
		for(j=0;j<ac;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
	
	
	
	printf("Enter the rows and columns of matrix b:");
	scanf("%d %d",&br,&bc);
	
	if(ac!=br)
	{
		printf("Invalid rows and columns");
		
	}
	else{
	
	printf("Enter the element of the matrix b:\n");
	for(i=0;i<br;i++)
	{
		for(j=0;j<bc;j++)
		{
			scanf("%d",&b[i][j]);
		}
	
	}
	}
	for(i=0;i<ar;i++)
	{
		for(j=0;j<bc;j++)
		{
			for(k=0;k<br;k++)
			{
				sum+=a[i][k] * b[k][j];
			}
			p[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<br;i++)
	{
		for(j=0;j<bc;j++)
		{
			printf("%4d",p[i][j]);
		}
		printf("\n");
	}
	
}
