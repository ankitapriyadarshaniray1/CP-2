#include<stdio.h>
void vowel(char a[],int  size)
{
	int i;
	for(i=0;i<size;i++)
		if(a[i]=='a'||a[i]=='A'||a[i]=='E'||a[i]=='e'|| a[i]=='I'||a[i]=='i'|| a[i]=='O' || a[i]=='o'||a[i]=='U'||a[i]=='u')
				

			printf("%c\n",a[i]);
}
main()
{
	char b[]={'A','o','B','v'};
	vowel(b,4);

}


