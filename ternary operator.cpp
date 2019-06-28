#include<stdio.h>
#include<conio.h>
main()
{
	int a, b;
	printf("Enter the value of a\n");
	scanf("%d", &a);
	b=(a==1)?9:0;//ternary condition syntex if a ==1 then 9  else 0
	printf("%d\t%d", a,b);
	getch();
	return 0;
}
