//program to check whether a given number is positive or negative
#include<stdio.h>

int main()
{
int number;
  printf("enter any number\n");
  scanf("%d", & number);
  if(number>0)
{
    printf("number is positive");
    }
    else 
    if(number<0)
    {
    printf("number is negative");
    }
    else {
    printf("number is zero");
    }
    return 0;
}