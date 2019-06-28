#include<stdio.h>
#include<conio.h>
int fact(int);
main()
{
	int number;
	printf("Enter the number\n");
	scanf("%d", &number);
	printf("%d! = %d", number, fact(number));
	getch();
	return 0;
}
int fact(int number)
{
	if(number==0)
	{
		return 1;
	}
	else
	{
		return number*fact(number-1);
	}
}
