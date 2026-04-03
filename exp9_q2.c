#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	printf("enter any string:\n");
	scanf("%s",s);
	rev(s);
	printf("reversed string is %s",s);
}
void rev( char *s)
{
	int i;
	int len;
	char c;
	len=strlen(s);
	for(i=0;i<len/2;i++)
	{
		c=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=c;
		
		
	}
	
}
