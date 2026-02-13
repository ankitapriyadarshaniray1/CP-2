#include<stdio.h>
struct complex
{
	int real,img;
};
main()
{
	struct complex d1,d2,d3;
	printf(" enter 1st complex no");
	scanf("%d%d",&d1.real,&d1.img);
	printf(" enter 2nd complex no");
	scanf("%d%d",&d2.real,&d2.img);
	d3.real=d1.real+d2.real;
	d3.img=d1.img+d2.img;
	printf("%d+%di",d3.real,d3.img);
}
