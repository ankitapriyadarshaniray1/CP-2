#include<stdio.h>
void space(char s[])
{
	int i;
	for(i=0; s[i]!=0;i++)
	{
	

	if(s[i]==32)
	s[i]='-';
	printf("%c",s[i]);
}
	
}
main()
{
	char ch[]="My name is Ankita";
	space(ch);
} 
 
