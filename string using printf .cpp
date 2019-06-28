#include<stdio.h>
#include<conio.h>
main()
{
	int i=0;
	char ch, str[100];
	printf("write something\n");
	while(ch!='\n')
	{
		ch=getchar();
		str[i]=ch;
		i++;
	}
	str[i]='\0';
	printf("\n%s", str);
	getch();
	return 0;
}
