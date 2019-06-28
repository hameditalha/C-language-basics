#include<stdio.h>
#include<conio.h>
main()
{
	int a[100];
	int n,i,j;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	n-=1;
	printf("Enter numbers\n");
	for(i=0;i<=n;i++)
	scanf("\n %d",&a[i]);
	int largest=a[0];
	 int smallest=a[0];
	for(i=0;i<=n;i++)
	{
		if(largest<a[i])
		largest=a[i];	
	}
	printf("Largest number is : %d\n",largest);
	for(i=0;i<=n;i++)
	{
		if(smallest>a[i])
		smallest=a[i];
	}
	printf("Smallest number is : %d",smallest);
	getch();
}
	
