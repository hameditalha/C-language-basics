#include<stdio.h>
#include<conio.h>
int scan1(int[2][2]);
int scan2(int[2][2], int[2][2]);
void display1(int[2][2]);
void display2(int[2][2], int[2][2]);
int add(int[2][2], int[2][2]);
int sub(int[2][2], int[2][2]);
int mul(int[2][2], int[2][2]);
int tps(int[2][2]);
void print(int [2][2]);
int i, j, result[2][2], a[2][2], b[2][2];
main()
{
	char op, ch;
	do
	{
		printf("\nEnter the operation you want to execute on a 2x2 matrix...\n+ for addition\n- for subtraction\n* for multiplication\nx for transpose\n");
		op=getche();
		printf("\n");
		switch(op)
		{	
			case '+':
				{
					add(a, b);
					break;
				}
			case '-':
				{
					sub(a, b);
					break;
				}
			case '*':
				{
					mul(a, b);
					break;
				}
			case 'x':
				{
					tps(a);
					break;
				}
			default:
			{
				printf("unknown operatr\n");
				break;
			}				
		}
		printf("\nPress Y to continue\nPress any key to abort...");
		ch=getche();
	}
	while (ch=='y' || ch=='Y');
	getch();
	return 0;
}
int add(int a[2][2], int b[2][2])
{
	scan2(a, b);
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			result[i][j]=a[i][j]+b[i][j];
		}
	}
	print(result);
}
int sub(int a[2][2], int b[2][2])
{
	scan2(a, b);
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			result[i][j]=a[i][j]-b[i][j];	
		}
	}
	print(result);
}
int mul(int a[2][2], int b[2][2])
{
	scan2(a, b);
	result[0][0]=(a[0][0]*b[0][0])+(a[0][1]*b[1][0]);
	result[0][1]=(a[0][0]*b[0][1])+(a[0][1]*b[1][1]);
	result[1][0]=(a[1][0]*b[0][0])+(a[1][1]*b[1][0]);
	result[1][1]=(a[1][0]*b[0][1])+(a[1][1]*b[1][1]);
	print(result);
}
int tps(int a[2][2])
{
	scan1(a);
	result[0][0]=a[0][1];
	a[0][1]=a[1][0];
	a[1][0]=result[0][0];
	print(a);
}
int scan1(int a[2][2])
{
	printf("Enter matrix\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	display1(a);
}
int scan2(int a[2][2], int b[2][2])
{
	printf("Enter first matrix\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	printf("Enter second matrix\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n");
	display2(a, b);
}
void display1(int a[2][2])
{
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void display2(int a[2][2], int b[2][2])
{
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void print(int a[2][2])
{
	printf("Resultant matrix is...\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
