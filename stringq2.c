#include<stdio.h>
#include<string.h>
#define max 10

int main()
{
    int i=0,j,f,t;
    char a[max];
    scanf("%s",a);
    int h,m,s;
    h=(a[0]-48)*10+(a[1]-48);
    m=(a[3]-48)*10+(a[4]-48);
    s=(a[6]-48)*10+(a[7]-48);
    if(h>23||h<0)
    {
        printf("Invalid Time");
        return 0;
    }
    else if(m>59||m<0)
    {
        printf("Invalid Time");
        return 0;
    }
    else if(s>59||s<0)
    {
        printf("Invalid Time");
        return 0;
    }
    else
        printf("Hours:%d Minutes:%d seconds:%d",h,m,s);
    
    return 0;
}