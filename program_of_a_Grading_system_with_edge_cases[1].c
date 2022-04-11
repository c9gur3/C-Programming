// program of a grading system
#include<stdio.h>

void main()
{
int mark;
    printf("Enter mark for the subject\n");
    scanf("%d", & mark);
   if (mark>100)
{
printf("impossible");
}
    else if(mark>=69 && mark<=100) 
    {
    printf("Grade A");
    }
    else if (mark>=60 && mark<69)
    {
    printf("Grade B");
    }
    else if(mark>=50 && mark<59)
    {
    printf("Grade C");
    }
    else if( mark>=40 && mark<50)
    {
     printf("Grade D");
    }
    else if ( mark<0)
    {
    printf("error");
    }
  
  
    
    
     
}