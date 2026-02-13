#include<stdio.h>
struct date
{
	int date,year,month;
};
 main()
{
	struct date d;
	printf("enter date, month and year\n");
	scanf("%d %d %d", &d.date,&d.month,&d.year);
	printf(" Date is %d / %d / %d ",d.date,d.month,d.year);
}
