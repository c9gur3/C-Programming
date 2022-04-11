//program to read temperature
#include<stdio.h>
void main()
{
int temp;
    printf("Enter the day's temperature:\n");
    scanf("%d", &temp);
    if (temp<0)
    
    printf(" Freezing weather is.\n");
    
    else if( temp<0)
    
    printf("%very cold weather is.\n");
    
    else if ( temp<10)
    
    printf(" cold weather is.\n");
    
    else if (temp<20)
    
    printf("Normal temperature.\n");
    
    else if (temp<30)
    
    printf(" It's hot.\n");
    
    else if(temp<40)
    
    printf("Very hot\n");
    
   
}