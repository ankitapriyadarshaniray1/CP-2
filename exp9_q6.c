 #include <stdio.h>

void reverse(int *n)
{
    int rev=0, rem;

    while(*n > 0)
    {
        rem = *n % 10;
        rev = rev*10 + rem;
        *n = *n / 10;
    }

    *n = rev;
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    reverse(&num);

    printf("Reversed number: %d",num);

    return 0;
}
