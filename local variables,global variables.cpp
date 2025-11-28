#include<stdio.h>
int a=10,b=20;
void add()
{
	int c;
	c=a+b;
	printf("%d\n",c);
}
void sub()
{
	int d;
	d=a-b;
	printf("%d",d);
}
int main()
{
	printf("a=%d b=%d\n",a,b);
	add();
	sub();
	return 0;
}
