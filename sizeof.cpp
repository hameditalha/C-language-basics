#include<stdio.h>
#include<conio.h>
main()
{
	printf("Char %d\n", sizeof(char));
	printf("Integer %d\n", sizeof(int));
	printf("Signed Integer %d\n", sizeof(signed));
	printf("Unsigned Integer %d\n", sizeof(unsigned));
	printf("Short %d\n", sizeof(short));
	printf("Long %d\n", sizeof(long));
	printf("Float %d\n", sizeof(float));
	printf("Double %d\n", sizeof(double));
	getch();
	return 0;
}
