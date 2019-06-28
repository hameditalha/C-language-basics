#include<stdio.h>
#include<conio.h>
int pow(int, int);
main()
{
	int number=0, power=0;
	printf("Enter the number\n");
	scanf("%d", &number);
	printf("Enter the power\n");
	scanf("%d", &power);
	printf("%d", pow(number, power));
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
