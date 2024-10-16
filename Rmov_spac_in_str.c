#include<stdio.h>
#include<string.h>
#define max 1000

int main()
{
    int i=0,n,j,n1=0;
    char str[max] , temp ;
    scanf("%[^\n]s",str);

    n=strlen(str);

    for(i=0;i<n-1;i++)
    {
        if(str[i]==' ')
        {
            n1++;
            for(j=i;j<n-1;j++)
            {
                str[j] = str[j+1];
            }
        }
    }

for( i=0; i<strlen(str)-n1; i++ )
{
    printf("%c",str[i]);
}
printf(".");
}