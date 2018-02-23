#include<stdio.h>
int main()
{
int a, s1, s2, z;
printf(" How many Integer numbers : ");
scanf("%d", &a);
z=a;
if(a>0)
{
printf("\n Enter the First number : ");
 scanf("%d", &s1);
  a--;
  if(a>0)
{
for(;a>=1;a--) 
{
 printf("\n Enter the next number : ");
 scanf("%d", &s2);
 if(s1<s2)
 {s1=s2;
  }
   }
   }
  
 printf("\n The Largest of %d numbers is %d", z, s1);
 return(0);
}
}
