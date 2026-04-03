#include<stdio.h>
struct distance
{
	int km;
	int m;
	int cm;
};
int main()
{
	struct distance d[5];
	int i;
	int max=0;
	for(i=0;i<5;i++)
	{
		printf("enter distance in km,m and cm ");
		scanf("%d%d%d",&d[i].km,&d[i].m,&d[i].cm);
	}
	for(i=0;i<5;i++)
	if(d[i].km>d[max].km)
	max=i;
	printf("longest distance :%dkm %dm %dcm", d[max].km,d[max].m,d[max].cm);
}
