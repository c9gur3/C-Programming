//Function to check whether a given integer is even or odd
#include<stdio.h>
int num(int x);//function prototype
int main()
{

int num;
printf("Enter the integer:\n");
scanf("%d", &num);
if (num%2==0)
{
printf("The number is even\n");
}
else 
{
printf("The number is odd\n");
}
 return 0;
}
int num(int x)// function definition
{
int num;
if (num%2==0)
{
printf("The number is even\n");
}
else 
{
printf("The number is odd\n");
}
return( num);
}