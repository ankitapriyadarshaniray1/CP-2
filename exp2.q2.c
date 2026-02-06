#include<stdio.h>
main()
{
	char a[]= "HELLO";
	char b[]="world";
    int s;
	s=strcmp(a,b);
	if(s==0)
	printf("strings are equal");
	else
	printf("strings are not equal");
}
