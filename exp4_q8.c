#include<stdio.h>
#define size 2
struct student
{
	char name[30];
	char sic[30];
	int roll;
	float cgpa;
	
};
int main()
{
	struct student s[size];
	int i;
	for(i=0;i<size;i++)
	{
		printf("enter the name,sic,roll,cgpa");
		gets(s[i].name);
		scanf("%s %d %f",&s[i].sic,&s[i].roll,&s[i].cgpa);
		fflush(stdin);
	}
	for(i=0;i<size;i++)
	printf("\n Name:%s\t SIC:%s\t Roll:%d\t CGPA:%f\t", s[i].name,s[i].sic,s[i].roll,s[i].cgpa);
	int max=0;
	for(i=1;i<size;i++)
	{
		if(s[i].cgpa>s[max].cgpa)
		{
			max=i;
		}
	}
	printf("\n student with highest cgpa:");
	printf("\n Name:%s\t SIC:%s\t Roll:%d\t CGPA:%f\t", s[max].name,s[max].sic,s[max].roll,s[max].cgpa);
}
	
	
	
	

