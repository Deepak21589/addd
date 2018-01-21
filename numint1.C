#include <stdio.h>
int main()
{
    long n;
    int count = 0;
  clrscr();  
    printf("\nEnter an integer: ");
    scanf("%ld", &n);

    while(n != 0)
    {
        n=n/10;
        count++;
    }

    printf("\nNumber of digits: %d", count);
    return 0;
}
