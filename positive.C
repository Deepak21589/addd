#include <stdio.h>
#include<conio.h>
int main(void) 
{
 int k;
 printf("\nEnter the num to find positive or negative:");
 scanf("%d",&k);
 clrscr();
if(((k>0)&&(k<100000)))
 {
 	printf("\n the num is positive");
 }
else
	{
		printf("\nThe num is negative ");
	}
	return 0;
}
