#include<stdio.h>
int main()
{
	char s[50],*p;
	printf("enter string \n");
	gets(s);
	p=s;
	while(*p!='\0')
	{
		if(*p>='a' && *p<='z')
		*p=*p-32;
		p++;
	}
	printf("string in upper case is %s",s);
}
