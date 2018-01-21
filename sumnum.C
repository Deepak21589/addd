#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int a,b=0,i;
  clrscr();
	printf("\nenter the num till what u want to sum");
	scanf("%d",&a);
	for(i=0;i<=a;++i)
	{
		b=(b+a/2);
		
	}
	printf("\naddition is:%d",b);
	return 0;
}
