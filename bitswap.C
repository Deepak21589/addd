#include <stdio.h>
#include<string.h>

int var(int*,int*);
int main() 
{
int a,b;
printf("\nEnter two values:");
scanf("%d,%d",&a,&b);
printf("\nValue bfr swap%d %d",a,b);
var(&a,&b);

	return 0;
}
int var(int*x,int*y)
{
	
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
printf("\nAftr swap%d %d",*x,*y);
}
