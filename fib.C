#include <stdio.h>

int main(void) {
int n,i,c=0,s=1;
printf("\nEnter the num:");
scanf("%d",&n);
printf("\nFibonacci series");
for(i=1;i<=n;++i)
{
	i=c+i;
	s=i;
	printf("\n%d",s);
}

	return 0;
}
