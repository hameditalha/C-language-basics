#include<stdio.h>
#include<conio.h>
main()
{
	int i, k;
	for(i=1; i<=5; i++)
	{
		for(k=i; k<=5; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}
	getch();
	return 0;
}
