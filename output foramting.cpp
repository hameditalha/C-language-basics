#include<stdio.h>
#include<conio.h>
main()
{
	int num=123456;
	float dec=123.456;
	printf("%d\n", num);
	printf("%10d\n", num);
	printf("%f\n", dec);
	printf("%.2f\n", dec);
	printf("%o\n", dec);
	printf("%x\n", dec);
	printf("%X\n", num);
	getch();
	return 0;
}
