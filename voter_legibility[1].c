#include<stdio.h>

int main()
{
int age;
    printf("enter the age of the voter\n");
    scanf("%d", &age);
    if ( age >=18)
    {
    printf("voter elligible:");
    }
    else
{
printf("not legible");
}
    return 0;
}