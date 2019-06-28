#include<stdio.h>
#include<conio.h>
main()
{
	int a[5]={2,3,4,4,6};
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<4; j++)
		{
			if(a[i]==a[j])
			{
				for(j=i; j<5; j++)
				{
					a[j]=a[j+1];
				}
			}
		}
	}
	for(int i=0; i<4; i++)
	{
		printf("%d", a[i]);
	}
}
