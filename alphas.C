#include <stdio.h>
#include<conio.h>

int main(void) 
{
char d;
clrscr();
printf("\n enter an num r alphabet :");
scanf("%c",&d);
if((d>='A' && d<='Z')||(d>='a' && d<='z'))
{
	printf("\nIt is an alphabet:%c",d);
}
else
{
	printf("it is not an alphabet\%c",d);
}
	return 0;
}
