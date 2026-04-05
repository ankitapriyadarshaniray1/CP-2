#include <stdio.h>

int main()
{
    int arr[5];
    int *p[5];
    int i;

    printf("Enter 5 elements:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        p[i] = &arr[i];
    }

    printf("Elements using pointer array:\n");

    for(i=0;i<5;i++)
    {
        printf("%d ", *p[i]);
    }

    return 0;
}
