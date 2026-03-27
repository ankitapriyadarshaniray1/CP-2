#include<stdio.h>
main()
{
	char s1[50];
	char s2[50];
	char *p=s1;
	char *q=s2;
	printf("enter string 1 \n");
	gets(s1);
	printf("enter string 2\n");
	gets(s2);
	while(*p==*q && *p!='\0')
		p++;
		q++;
	if(*p==*q)
	printf("strings are equal");
	else
	printf("string are not equal");
}

