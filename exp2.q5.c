#include<stdio.h>
void main()
{
    char a[]="121";
    char rev[100];
    strcpy(rev,a);
    strrev(a);
    if(strcmp(a,rev)==0)
    printf("Palindrome");
    else
    printf("not a palindrome");
}
