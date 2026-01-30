#include<stdio.h>
void sentence(char s[])
{

	int i,count=1;
		for(i=0; s[i]!=0;i++)
		{
		
		
		  if(s[i]==32)
		
		
	     count++;
	 }
	
		printf("%d",count);
}
main()

{
	char ch[]="My name is Ankita";
	sentence(ch);
}
	
		
