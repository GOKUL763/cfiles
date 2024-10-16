#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
    int n,i=0,j,t,s;
    char a[MAX],*a1,*a2,b[MAX],c[MAX];
    //fgets(a,MAX,stdin);
    scanf("%[^\n]s",a);
    

    for(i=0;a[i]!=' ';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    for(i=strlen(b);i>=0;i--)
    {
        printf("%c",b[i]);
    }
    printf(" ");
    j=0;
    for(i=strlen(a);a[i]!=' ';i--)
    {
        printf("%c",a[i]);
    }
    
}