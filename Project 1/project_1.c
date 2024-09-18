/*We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i =0;
    int guesses=0;
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int random_number = (rand() % 100) + 1;

//Using for loop to check the number of guesses taken to find the random number.
   for ( i = 0; i!=random_number; guesses++)
   {
    printf("Enter your guess: \n");
        scanf("%d", &i);
       
        if (random_number < i)
        {
            printf("Lower number please \n");
        }
        if (random_number > i)
        {
            printf("Higher number please \n");
        }
   
   }

printf("YOU WIN !!!!!!!!!!!");
printf("%d",guesses);
    return 0;
}
