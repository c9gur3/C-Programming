// program to find whether a given year is leap year or not#include<stdio.h>

int main()
{
   int year;
 printf("enter the year\n");
  scanf("%d", & year);
  if (year%4==0)
  {
  printf("It is a leap year");
  }
  else 
  { 
  printf("Not a leap year");
}
    return 0;
}