/* To code to print 204 to show we can use enums*/

#include <stdio.h>

int main()
{
    enum Company {GOOGLE, FACEBOOB, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company x = XEROX, y=GOOGLE, z=EBAY;

    printf ("%d\n",x);
    printf ("%d\n",y);
    printf ("%d\n",z);

    return 0;
}