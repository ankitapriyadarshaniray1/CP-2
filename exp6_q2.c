#include<stdio.h>
main()
{
	int i,n,a[100],max;
	int *p=a;
	printf("enter size of the array");
	scanf("%d",&n);
	printf("enter elements in the array:\n");
    for(i=0;i<n;i++)
	scanf("%d",(p+i));
	printf("largest element in array is:");
	max=*p;
	for(i=0;i<n;i++)
	if(*(p+i)>max)
	max=*(p+i);
	printf("%d",max);
	
	
}
