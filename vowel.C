#include <stdio.h>
#include<conio.h>
 
int main(void) 
{
char s;
clrscr();
printf("\nEnter an alphabet:");
scanf("%c",&s);
if((s='a','e','i','o','u')||(s='A','E','I','O','U'))
{
	printf("\n the alphabet is vowel:%c",s);
}
else
{
	printf("\n it is not an vowel:%c",s);
}
	return 0;
}
