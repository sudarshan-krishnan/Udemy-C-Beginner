// to make a menu program

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    double variable1 = 0;
    double variable2 = 0;
    double area = 0 ;
    
    int x ;
    printf(" Enter 1 to find area of a circle \n Enter 2 to find area of a rectangle \n Enter 3 to find area of a triangle \n Enter 4 to find area of a square \n");
    scanf ("%d", &x);
  
    switch (x)
    {
        case 1 :
            printf ("\nEnter radius :");
            scanf("%lf", &variable1);
            
            area = 3.14 * variable1 * variable1;
            
            printf("The area is: %.2lf\n", area);
            break;
        
         case 2 :
            printf ("\nEnter lenght :");
            scanf ("%lf", &variable1);
            
            printf ("Enter width :");
            scanf ("%lf", &variable2);
            
            area = variable1 * variable2;
            
            printf("The area is: %.2lf\n", area);
            break;
            
        case 3 :
            printf ("\nEnter height :");
            scanf ("%lf", &variable1);
            
            printf ("Enter lenght of base :");
            scanf ("%lf", &variable2);
            
            area = 0.5 * variable1 * variable2;
            
            printf("The area is: %.2lf\n", area);
            break;
            
        case 4 :
            printf ("\nEnter the lenght of the side:");
            scanf ("%lf", &variable1);
        
            area = variable1 * variable1;
        
            printf("The area is: %.2lf\n", area);
            break;
            
        default : 
        printf("Enter a valid input");
         
    }
    
    return 0;
    
} 