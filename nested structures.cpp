#include<stdio.h>
#include<conio.h>
	struct company
	{
		char name[10];
		float salary;
	};
	struct employe
	{
		struct company manager;
		struct company director;
	};
	struct employe info={{"Ahmed", 60000},{"ali", 100000}};
main()
{
	printf("manager\n");
	printf("name: %s\n", info .manager. name);
	printf("salary: %f\n\n", info. manager. salary);
	printf("director\n");
	printf("%s\n", info.director.name);
	printf("%f\n", info.director.salary);
	getch();
	return 0;
}
