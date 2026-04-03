#include<stdio.h>
struct complex
{
	int real;
	int img;
};
void incrComplex( struct complex *c)
{
	c-> real++;
	c-> img++;
}
main()
{
	struct complex c;
	printf("enter the real part :");
	scanf("%d",&c.real);
	printf("enter the imaginary part:");
	scanf("%d",&c.img);
	incrComplex(&c);
	printf(" after increment\n real=%d\n imaginary=%d\n",c.real,c.img);
	
	
}
