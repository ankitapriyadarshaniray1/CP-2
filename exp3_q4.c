#include<stdio.h>
 struct student
 {
 	struct address
 	{
 		 char city[20];
		 int pin;
 	};
 	struct address add;
 	 char name[50];
	 int roll;
 	 float marks;
};
main()
{
	struct student s;
	printf(" enter name,rollno, marks , city and pincode");
	scanf("%s%d%f%s%d",s.name,&s.roll,&s.marks,s.add.city,&s.add.pin);
	printf("name: %s\n rollno :%d\n marks:%f\n city:%s\n pincode:%d\n",s.name,s.roll,s.marks,s.add.city,s.add.pin);
}
