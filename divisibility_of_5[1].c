//program to determine whether a number is divisible by 5 or not
#include<stdio.h>

int main()
{
int number;
    printf("enter any number\n");
    scanf("%d", & number);
    if((number%5)==0)
    printf("the number is divisible by 5");
    else
    printf("number is not divisible by 5");
    return 0;
}