#include<stdio.h>
int main()
{
	char s[50],*p;
	int len=0;
	printf("enter any string");
	scanf("%s",s);
	p=s;
	while(*p!='\0')
	{
	len++;
	p++; 	
	}
	printf("length =%d",len);
	
}

