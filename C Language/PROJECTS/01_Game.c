// PROJECT 01

// Q)write a program that generates a random no. and asks the player to guess it.
// if the player's guess is higher than the usual no., the program displays"Lower number please".
// similarly, if the user's guess is too low,the program prints "Higher number please".
// When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // // Generate a random number between 0 and RAND_MAX i.e here 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    // //print the random number
    // printf("Random number: %d\n", randomNumber);
    do
    // we use do while loop cuz we want to execute the loop at least once (a good use of do while loop)
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower no. please!\n");
        }
        else if (guessed < randomNumber) // used else if rather than else taaki last mein higher no. please print na ho isiliye specific condition hi de diye nhi toh saare condition mein yeh line print ho jata
        {

            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrates!!,You guessed correct\n");
        }
        no_of_guesses++;

    } while (guessed != randomNumber);
    printf("You  guessed the number is %d guesses", no_of_guesses);

    return 0;
}
