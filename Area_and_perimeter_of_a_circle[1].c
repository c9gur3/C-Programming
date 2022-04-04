//program to calculate area and perimeter of a circle
#include<stdio.h>

int main()
{
float r;
float area;
float perimeter;
printf("enter the radius of the circle \n");
scanf("%f", & r);
area= 3.142*r*r;
perimeter= 2*3.142*r;
printf("area of the circle is %f\n",area);
printf("the perimeter of the circle is %f\n", perimeter);

    return 0;
}