// To build a program to find circumference and area with radius given by a user

#include <stdio.h>

int main()
{
	int radius =0;
    float circum = 0;
    float area = 0;
    const float PI = 3.14;
    
    printf ("Enter the radius of the circle (cms) : ");
    scanf ("%d", &radius);
    
    circum = PI *( float) radius * 2;
    area = PI *( float) radius * ( float) radius ;
    
    printf ("The circumference is %.2f cms\n", circum);
    printf ("The area is %.2f cms\n", area);
    
	return 0;
}  