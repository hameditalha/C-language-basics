#include<stdio.h>
#include<conio.h>
main()
{
	int i=1 , n;
	long t1=0, t2=1, next; 
	printf("Enter the limit of series\n");
	scanf("%d", &n);

	while(i<=n)
	{
		next=t1+t2;
		printf("%ld\t", next);
		t2=t1;
		t1=next;
		i++;
	}
	getch();
	return 0;
}
