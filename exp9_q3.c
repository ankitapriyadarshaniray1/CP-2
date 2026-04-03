#include<stdio.h>
void upper( char*p)
{
	while(*p!='\0')
	{
		if(*p>='a' && *p<='z')
		*p=*p-32;
		p++;
	}
}



int main()
{
	char s[50];
	printf("enter string \n");
	gets(s);
	upper(s);
	printf("string in upper case is %s",s);
}
