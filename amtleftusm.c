#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,j,f,t,s=0,r,c;
    printf("Enter no. of ROWS : ");
    scanf("%d",&r);
    printf("Enter no. of COLUMNS : ");
    scanf("%d",&c);
    int a[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");

    }

        printf("\n");

    t=c-1;
    for(i=0;i<r;i++)
    {
        for(j=t;j>t-1;j--)
        {
            s+=a[i][j];
        }
        t-=1;
    }


    printf(" s = %d",s);
}