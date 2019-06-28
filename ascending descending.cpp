#include<stdio.h>
#include<conio.h>
int asc(int[]);
int des(int[]);
int x, y, a, num[5];
main()
{
	printf("Enter 5 numbers to sort\n");
	for(x=0; x<5; x++)
	{
		scanf("%d", &num[x]);
	}
	asc(num);
	des(num);
	getch();
	return 0;
}
int asc(int num[5])
{
	for(x=0; x<5; x++)
	{
		for(y=x+1; y<5; y++)
		{
			if(num[x]>num[y])
			{
				a=num[x];
				num[x]=num[y];
				num[y]=a;
			}
		}
	}
	printf("Numbers in ascending order are..\n");
	for(x=0; x<5; x++)
	{
		printf("%d\t", num[x]);
	}
	printf("\n");
}
int des(int num[5])
{
	for(x=0; x<5; x++)
	{
		for(y=x+1; y<5; y++)
		{
			if(num[x]<num[y])
			{
				a=num[x];
				num[x]=num[y];
				num[y]=a;
			}
		}
	}
	printf("Numbers in descending order are..\n");
	for(x=0; x<5; x++)
	{
		printf("%d\t", num[x]);
	}
}
