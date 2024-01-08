// To build a prgram to find hypotenuse of a right triangle

#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    
    printf("Enter first side\'s lenght in cm\n");
    scanf ("%lf", &a);
    printf("Enter second side\'s lenght in cm\n");
    scanf ("%lf", &b);
    
    double fir = pow(a,2);
    double sec = pow(b,2);
    
    c = sqrt(fir) + sqrt(sec);
    
    printf ("Lenght of hypotenuse is %.2lf\n ", c);
    
	return 0;
}  