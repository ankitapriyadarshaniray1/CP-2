#include<stdio.h>
main()
{
	int i,n,a[100],sum=0;
	int *p=a;
	printf("enter size of the array");
	scanf("%d",&n);
	printf("enter elements in the array:\n");
    for(i=0;i<n;i++)
	scanf("%d",(p+i));
	printf("sum of array elements are \n");
    for(i=0;i<n;i++)
    sum+=*(p+i);
    printf("%d",sum);
}
