#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,n,s;
    int *ptr;
    printf("Enter number : ");
    scanf("%d",&n);
    ptr = &n;
    printf("\n %d %d %d\n",n,&n,ptr);
    

    printf("%d",*ptr);
}