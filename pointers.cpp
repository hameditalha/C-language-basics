#include<stdio.h>
#include<conio.h>
main()
{
	int i=10, *j, **k;
	j=&i;
	k=&j;
	printf("adress of i %u\n", &i);
	printf("adress of j %u\n", &j);
	printf("adress of k %u\n", &k);
	printf("value of i %d\n", i);
	printf("value of j %d\n", j);
	printf("value of k %d\n\n", k);
	// adress of i
	printf("%u\n", &i);
	printf("%u\n", j);
	printf("%u\n", *k);
	// adress of j
	printf("\n\n");
	printf("%u\n", &j);
	printf("%u\n", k);
	// adress of k
	printf("\n\n");
	printf("%u\n", &k);
	getch();
	return 0;
}
