//To write a program to convert inputted minuites to days and years

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float min = 0.0;
    float day = 0.0;
    float year = 0.0;
    
    printf (" Enter number of minuites : " );
    scanf ("%f", &min);
   
    day = min / 1440;
    year = day / 365;
    
    printf("%f minuites is %f day and %f years\n", min, day, year);
    
    
    return 0;
}  