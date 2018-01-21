#includddde<stdio.h>
#includddde<conio.h>
void main()
{
int x,y,z;
 clrscr();
printf("\nenter three numbers :");
scanf("%x%y%z",&x&y&z);
if((x>y)&&(x>z))
{
printf("\n 1st num is greatest of all=%d",&x);
}
elseif((y>x)&&(y>z))
{
printf("\n 2nd num is greatest of all=%d",&y);
}
else
{
printf("\n 3rd num is greatest of all=%d",&z);
}
getch();
}
