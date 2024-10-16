#include<stdio.h>
#include<string.h>
#define size 50
/* revrese, 
first and last repeative 
char i n srt,
copy str, 
str comp,
count of each char in str*/

/*26*/
int main()
{
	int b[26]={0},i,t,f,s,l;
	char a[size];
	printf("Enter String : ");
	scanf("%[^\n]s",a);
	
	printf("\n%s",a);
	strupr(a);
	printf("\n%s",a);
	l=strlen(a);
	printf("\n%d",l);
	for(i=0;i<l;i++)
	{
		
		f=0;
		if(a[i]==' ')
		{
			s++;
			continue;
		}
		printf("\n%c",a[i]);
		printf("%4d",(int)a[i]);
		f=(int)a[i];
		b[f-65]=b[f-65]+1;
		printf("%5d",f);
		printf("\n%5d",b[f-65]);
		
	}
	
	for(i=0;i<26;i++)
	{
		
		if(b[i]!=0)
		{
			printf("\n%c : %d",i+65,b[i]);
		}
		
	}
	
	
	return 0;
}
