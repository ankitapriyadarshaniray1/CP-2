#include<stdio.h>
void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("After swapping\n a=%d\n b=%d\n",a,b);
}
