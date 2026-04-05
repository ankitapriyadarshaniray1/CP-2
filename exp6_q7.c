#include <stdio.h>

void reverse(int *p, int n)
{
    int i;

    for(i=n-1;i>=0;i--)
    {
        printf("%d ", *(p+i));
    }
}

int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    reverse(arr,5);

    return 0;
}
