#include <stdio.h>

int main() 
{
int a,b,c;
printf("\nEnter two values:");
scanf("%d,%d",&a,&b);
printf("\nValue bfr swap%d %d",a,b);
c=a+b;
a=c-a;
b=c-b;
printf("\nAftr swap%d %d",a,b);
	return 0;
}
