#include<stdio.h>
#include<conio.h>
main()
{
	int i, j, s;
	for(i=1; i<=7; i+=2)
	{
		for(s=i; s<=6; s++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	getch();
	return 0;
}
