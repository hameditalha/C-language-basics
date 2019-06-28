#include<stdio.h>
#include<conio.h>
main()
{
	//all the operations below are performed on the binary equivalents
	int a=12, b=21;
	printf("a = %d\nb = %d\n", a, b);
	printf("a&b %d\n", a&b);//and 
	printf("a|b %d\n", a|b);//or 
	printf("a^b %d\n", a^b);//xor 
	printf("a' %d\n", ~a);//not 
	printf("b' %d\n", ~b);//not 
	printf("right shift a by 3 %d\n", a>>3);//right shift
	printf("left shift b by 3 %d\n", b<<3);//left shift
	getch();
	return 0;
}
