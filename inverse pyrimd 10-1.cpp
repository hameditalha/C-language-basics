#include<stdio.h>
#include<conio.h>
main()
{
	int i, j, s, v=10;
	for(i=1; i<=4; i++)
	{
		for(s=1; s<=i; s++)
		{
			printf(" ");
		}
		for(j=4; j>=i; j--)
		{
			printf("%d ", v);
			v--;
		}
		printf("\n");
	}
	getch();
	return 0;
}
