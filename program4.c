
#include<stdio.h>
void mult_scalar(int a[],int size,int scalar)
{
	int i;
	for(i=0;i<size;i++)
	{

		a[i]=a[i]*scalar;
		printf("%d\n",a[i]);
	}
}
main()
{
	int b[]={10,20,30,40};
	mult_scalar(b,3,10);
}
			
	

