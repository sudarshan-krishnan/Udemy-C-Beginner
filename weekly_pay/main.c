// To design a function to find out pay of an individual worker

#include <stdio.h>

double gross (double x)
{
    double salary = 0.0;
    double y = 0.0;
    
    if (x <= 40 && x > 1)
    {
        salary = x * 12;
    }
    
    else if (x > 40)
    {
        y = x - 40;
        salary = (40 * 12) + (y * 18);
    }
    
    else
    {
        salary = 0;
    }

return salary;

}

double tax (double x)
{
    double y = 0;
    double z = 0;
    double v= 0;
    if ( x <= 300)
    {
        y = 0.15 * x;
    }
    
    else if (x  > 300 && x <= 450)
    {
        z = x - 300;
        y = 45 + (0.2 * z);
    }
    
    else if (x > 450)
    {
        v = x - 450;
        y = 120 + (0.25 * v);
    }

return y;
}

int main()
{
    double input ;
    double x;       //gross
    double y;       //tax
    double z;       //net
    printf ("Enter the number of hours you worked this week: ");
    scanf ("%lf", &input);
    
    x = gross (input);
    y = tax (input);
    z = x-y;
    
    printf ("The gross income is %.2lf\n", x);
    printf ("The tax is %.2lf\n", y);
    printf ("The net income is %.2lf\n", z);
    return 0;
} 