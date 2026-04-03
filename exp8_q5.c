#include<stdio.h>
struct book
{
	char name[50];
	char author[50];
	float price;
};
int main()
{
	struct book b[3];
	struct book *p=b;
	int i;
	for(i=0;i<3;i++)
{
	

		printf("Enter the details of the book\n");
		printf("Name:");
		gets((p+i)->name);
		fflush(stdin);
		printf("Author:");
		gets((p+i)->author);
		printf("price:");
		scanf("%f",&(p+i)->price);
		fflush(stdin);
}
	
	printf("book details:\n");
	for(i=0;i<3;i++)
	{
		printf("Book:%s\n Author:%s\n Price:%f\n",(p+i)->name,(p+i)->author,(p+i)->price);
	}
}
