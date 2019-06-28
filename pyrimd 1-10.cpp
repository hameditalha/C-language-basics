#include<stdio.h>
#include<conio.h>
main()
{
	int i, j, s, v=1;
	for(i=1; i<=4; i++)
	{
		for(s=i; s<=5; s++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ", v);
			v++;
		}
		printf("\n");
	}
	getch();
	return 0;
}
