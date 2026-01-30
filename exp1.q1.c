#include<stdio.h>
void printstr(char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	printf("%c",s[i]);
}
main()
{
	char ch[]="hello world";
	printstr(ch);
}

