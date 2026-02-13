#include<stdio.h>
struct student
{
	char name[30];
	int roll;
	float marks;
};
int main()
{
	struct student s1;
	printf("enter student name,rollno and marks");
	gets(s1.name);
	scanf(" %d %f",&s1.roll,&s1.marks);
	printf("Name :%s\n Rollno:%d\n marks:%f",s1.name,s1.roll,s1.marks); 
}
