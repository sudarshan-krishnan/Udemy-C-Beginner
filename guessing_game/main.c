// To generate a game where the user has to guess a number beteween 1 and 20

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time (&t));
    int random = rand() % 21;
    
    int input;
    
    printf ("This is a guessing game\n");
    
    
    for (int i = 4; i >= 0; i--)
    {
    
    printf ("Please pick a number between 1 and 20\n\n");
    printf ("Enter number here: ");
    scanf ("%d", &input);
    
    
        if (input == random) 
            {
            printf ("Congratulations! You guessed correctly\n");
            break;
            }
            
        else 
        {
         printf ("Sorry %d is the wrong number\n\nYou have %d chances left.", input, i);   
        }
    }
    printf("\n The number is : %d",random);

    return 0;
 }   