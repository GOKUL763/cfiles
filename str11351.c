#include<stdio.h>
#include<string.h>
#define size 50

int main()
{
	int b[26]={0},c[26]={0},i,t,f,s,l;
	char a[size];
	printf("Enter String : ");
	scanf("%[^\n]s",a);
	
	printf("\n%s",a);
	printf("\n%s",a);
	l=strlen(a);
	printf("\n%d",l);
	for(i=0;i<l;i++)
	{
		
		f=0;
		f=(int)a[i];
		if(a[i]==' ')
		{
			s++;
			continue;
		}
		
		else if(f>64&&f<91)
		{
			printf("\n%c",a[i]);
			printf("%4d",(int)a[i]);
		
			b[f-65]=b[f-65]+1;
			printf("%5d",f);
			printf("\n%5d",b[f-65]);
		}
		else if(f>96&&f<123)
		{
			printf("\n%c",a[i]);
			printf("%4d",(int)a[i]);
		
			c[f-97]=c[f-97]+1;
			printf("%5d",f);
			printf("\n%5d",c[f-97]);
		}
		
	}
	
	for(i=0;i<26;i++)
	{
		
		if(b[i]!=0)
		{
			printf("\n%c : %d",i+65,b[i]);
		}
		
	}
	
	for(i=0;i<26;i++)
	{
		
		if(c[i]!=0)
		{
			printf("\n%c : %d",i+97,c[i]);
		}
		
	}
	printf("\nSpace : %d",s);
	return 0;
}
