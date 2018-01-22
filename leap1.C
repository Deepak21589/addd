#include <stdio.h>
#include<conio.h>
int main()
{
    int r;

    printf("Enter a year: ");
    scanf("%d",&r);
 clrscr();
    if(r%4 == 0)
    {
        if( r%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( r%400 == 0)
                printf("%d is a leap year.", r);
            else
                printf("%d is not a leap year.", r);
        }
        else
            printf("%d is a leap year.",r );
    }
    else
        printf("%d is not a leap year.", r);
    
    return 0;
}
