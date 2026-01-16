#include<stdio.h>
int minarray(int a[10],int size)
{
	int i,min;
	min=a[0];
	for(i=1;i<size;i++)
		if(a[i]<min)
			min=a[i];
	return min;
}
main()
{
	int b[]={4,5,6,3};
	printf("Smallest element is %d",minarray(b,4));
}

