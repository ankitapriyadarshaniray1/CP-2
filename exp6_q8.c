#include <stdio.h>

int largest(int *p, int n)
{
    int i, max;

    max = *p;

    for(i=1;i<n;i++)
    {
        if(*(p+i) > max)
        {
            max = *(p+i);
        }
    }

    return max;
}

int main()
{
    int arr[5], i, result;

    printf("Enter 5 elements:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    result = largest(arr,5);

    printf("Largest = %d",result);

    return 0;
}
