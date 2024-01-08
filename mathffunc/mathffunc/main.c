// To build a menu fucntion to find one of four mathematical functions

#include <stdio.h>


int lcm (int num1, int num2) 
{
    int max;
    int temp;
    max = (num1 > num2) ? num1 : num2; 
   temp = 1;
    while (temp <= max) {
        if (max % num1 == 0 && max % num2 == 0)
            return max;
        ++temp;
        
    }

return max;

}

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX //

int fact (int num1) {
    int result =1;
for  (int i = num1; i >=  1 ; i--)
            {
                result = (result * i);
            }
return result;
}
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX //

int main()
{
    
    int input = 0;
    int var1 ;
    int var2 ;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    
    printf ("Enter 1 to find LCM of two numbers\nEnter 2 to find GCD of 2 numbers\nENter 3 to find factorial value of a number\nEnter 4 to exit\n");
    scanf ("%d", &input);
    
    
    do {
    switch (input)
    {
        case 1 :
            printf ("input the first number:");
            scanf ("%d", &var1);
            printf ("input the second number:");
            scanf ("%d", &var2);
            
           result1 = lcm(var1,var2);
           printf ("LCM is %d\n", result1);
           break;
            
        case 2 :
            printf ("input the first number:");
            scanf ("%d", &var1);
            printf ("input the second number:");
            scanf ("%d", &var2);
            
            result2 = (var1 *var2) / (lcm(var1,var2));
            printf ("GCD is %d\n", result2);
            break;
           
        case 3 :
            printf ("input the  number:");
            scanf ("%d", &var1);
            result3 = fact(var1);
            printf ("Factorial is %d\n", result3);
            break;

    }
    } 
    while ( input != 4);
    
return 0;

}