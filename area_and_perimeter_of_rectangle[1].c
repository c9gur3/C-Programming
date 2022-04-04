//program to calculate area and perimeter of a rectangle
 #include<stdio.h>
int main()
{
float length;
float width;
float area;
float perimeter;
printf("enter the length of rectangle \n");
 scanf("%f",& length); 
printf("enter the width of rectangle \n "); 
scanf("%f", & width); 
area= length*width;
printf("area of the rectangle is %f \n",area);
perimeter =2*(length + width);
printf("perimeter of the rectangle is %f\n", perimeter);
    return 0;
}