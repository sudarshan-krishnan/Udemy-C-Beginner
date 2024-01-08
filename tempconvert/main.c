// TO covert celcius to farenheit and vise versa

#include <stdio.h>

int main()
{
	int variable = 0;
    int result = 0;
    int input = 0;
    
    printf("Enter 1 to convert Celcius to Farenheit or\nEnter 2 to convert Farenheit to Celcius :");
    scanf ("%d", &input);
    
     if ( input == 1)
     {
         printf("Whats the tempertaure :");
         scanf ("%d", &variable);
         
         result = 32 + (variable*9)/5;
         
         printf("The temperature is: %d *F", result);
     }
     
     else if ( input == 2)
     {
         printf("Whats the tempertaure :");
         scanf ("%d", &variable);
         
         result = ((variable-32)*5)/9;
         
         printf("The temperature is: %d *C", result);
     }
     
     else 
    {
         printf ("Enter a valid input");
     }
	return 0;
}  