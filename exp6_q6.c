#include <stdio.h>

int sum(int *p, int n)
{
    int i, s=0;

    for(i=0;i<n;i++)
    {
        s = s + *(p+i);
    }

    return s;
}

int main()
{
    int arr[5], i, result;

    printf("Enter 5 elements:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    result = sum(arr,5);

    printf("Sum = %d",result);

    return 0;
}
