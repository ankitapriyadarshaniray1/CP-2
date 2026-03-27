#include<stdio.h>
main()
{
int i,n,a[100];
int *p=a;
printf("enter the size of array");
scanf("%d",&n);
printf("enter elements in the array:\n");
for(i=0;i<n;i++)
scanf("%d",(p+i));
printf("elements in array are:\n");
for(i=0;i<n;i++)
printf("%d\n",*(p+i));
}

