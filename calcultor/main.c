// To build a calculator for basic functions

#include <stdio.h>
#include <ctype.h>

int main()
{
    
    char function;
    int var1 = 0;
    int var2 = 0;
    int result = 0;
    
    printf ("Please enter the function you want to perform \n'A' to add\n'S' to subtract\n'M' to multipy\n'D' to divide \n");
    scanf ("%c", &function);
     
    printf ("Please enter the first number: ");
    scanf ("%d", &var1);
    
    printf ("Please enter the second number: ");
    scanf ("%d", &var2);
    
      function = toupper(function);
    
    switch (function)
    {
        case 'A' :
            result = var1 + var2;
            printf ("The result is %d", result);
            break;
        
        case 'S' :
            result = var1 - var2;
            printf ("The result is %d", result);
            break;
        
        case 'M' :
            result = var1 * var2;
            printf ("The result is %d", result);
            break;
            
            case 'D' :
            result = var1 / var2;
            printf ("The result is %d", result);
            break;
            
    }

    return 0;
}  