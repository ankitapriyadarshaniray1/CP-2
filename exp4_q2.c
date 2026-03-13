#include<stdio.h>
enum nameofdays{ monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
int main()
{
	enum nameofdays a;
	a=sunday;
	printf("%d",a);
	return 0;
}

