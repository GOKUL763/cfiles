#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    int i=0,j=0,t,n;
    char str[max];
    printf("Enter string : ");
    scanf("%[^\n]s",str);
    n=strlen(str);
    int arr[n];
    for(i=0;i<n;i++)
    {
        if(arr[str[i]]!=1 && str[i]!=' ')
        {
            printf("%c",str[i]);
            arr[str[i]]=1;
        }
    }

}