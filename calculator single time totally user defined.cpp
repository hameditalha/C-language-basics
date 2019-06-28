#include<stdio.h>
#include<conio.h>
float add(float, float);
float sub(float, float);
float div(float, float);
float mul(float, float);
main()
{
	float a, b, c;
	char op;
	printf("Enter two numeric operands..\n");
	scanf("%f\n%f", &a, &b);
	printf("Enter operator..\n");
	op=getche();
	printf("\n");
	switch(op)
	{
		case '+':
			{
				c=add(a, b);
				printf("The sum is %f", c);
				break;
			}
		case '-':
			{
				c=sub(a, b);
				printf("The difference is %f", c);
				break;
			}
		case '/':
			{
				c=div(a, b);
				printf("The fraction is %f", c);
				break;				
			}	
		case '*':
			{
				c=mul(a, b);
				printf("The product is %f", c);
				break;
			}
		default :
			{
				printf("ERROR");			
			}	
	}
	getch();
	return 0;
}
float add(float a, float b)
{
	float c;
	c=a+b;
	return(c);
}
float sub(float a, float b)
{
	float c; 
	c=a-b;
	return(c);
}
float mul(float a, float b)
{
	float c;
	c=a*b;
	return(c);
}
float div(float a, float b)
{
	float c; 
	c=a/b;
	return(c);
}
