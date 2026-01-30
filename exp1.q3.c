#include<stdio.h>
void reverse(char s[])
{
	int i;
	for(i=0; s[i]!=0;i++)
	printf("%c",s[i]);
	
}
main()
{
	char a[]="hii";
	strrev(a);
	reverse(a);
}
