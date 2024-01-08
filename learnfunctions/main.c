// To find product of two numbers using functions

#include <stdio.h>

int multiply(int num1, int num2) 
{
    int result = num1 * num2;
    return result;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int product = multiply(a, b);
    printf("The product of %d and %d is: %d\n", a, b, product);

    return 0;
}
