#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
  int a;
  printf("Enter value of a= ");
  scanf("%d",&a);
  if(a==0)
  {
  printf("value is neutral");
  }
  else if(a>0)
  {
   printf("value is positive");
  }
  else
  {
  printf("value is negative");
  }
  getch();
  }