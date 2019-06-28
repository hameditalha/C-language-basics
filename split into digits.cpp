#include<stdio.h>
#include<conio.h>
main()
{
	int a, i=0, n=0, x[100];
	printf("Enter number\n");
	scanf("%d", &a);
	while(a!=0)
	{
		x[i]=a%10;
		a/=10;
		i++;
		n++;
	}
	for(i=n-1; i>=0; i--)
	{
	printf("%d\n", x[i]);
	}
	getch();
	return 0;
}
