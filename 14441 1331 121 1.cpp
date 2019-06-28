#include<stdio.h>
#include<conio.h>
main()
{
	int i, j, x=4;
	for(i=0; i<4; i++)
	{
		printf("1");
		for(j=3; j>i; j--)
		{
			printf("%d", x);
		}
		if(i!=3)
		{
			printf("1\n");
		}
		else
		{
			printf("\n");
		}
	x--;
	}
	getch();
	return 0;
}
