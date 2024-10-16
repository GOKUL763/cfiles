#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    int i=0,j,n;
    char str[max];
    scanf("%[^\n]s",str);
    char temp;
    
    n=strlen(str);
    for(i=0;i<n-1;i++)
    {
        
        for(j=0;j<n-1;j++)
        {
            
            if(str[j]>str[j+1] && n!=n-1)
            {
                
                temp=str[j+1];
                str[j+1]=str[j];
                str[j]=temp;
                
            }
        }
    }

    printf("%s.",str);
}