// To build a program to find perimeter and area of a rectangle after taking weight an d height as input

#include <stdio.h>

int main()
{
    int w = 0;
    int h = 0;
    int p = 0;
    int a = 0;
    printf (" Enter the weight of the rectangle (cm):  \n");
    scanf ("%d", &w);
    printf (" Enter the height of the rectangle (cm): \n");
    scanf ("%d", &h);
    p = w+w+h+h;
    a = w*h;
    printf (" Perimeter is : %d\n",p);
    printf ("Area is : %d\n",a);
    
    return 0;
}