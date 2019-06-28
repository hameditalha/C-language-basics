#include<stdio.h>
#include<conio.h>
int pow(int, int);
main()
{
	int number, power=3;
	printf("Enter the number\n");
	scanf("%d", &number);
	printf("cube of %d is %d", number, pow(number, power));
	getch();
	return 0;
}
int pow(int number, int power)
{
	if(power==0)
	{
		return 1;
	}
	else
	{
		return (number*pow(number, power-1));
	}
}
