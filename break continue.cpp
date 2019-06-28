#include<iostream>
#include<conio.h>
main()
{
	int i;
	for (i=1;i<=10;++i)
	{
	   if (i==3)
	   continue;
	   if (i==7)
	   break;
	   printf("%d ",i);
	}
	getch();
	return 0;
}
