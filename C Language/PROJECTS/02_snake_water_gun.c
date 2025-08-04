
// Snake,water,gun or rock,paper,scissors is a game most of us have played during school time.
//  write a C program capable of playing this game with you.
//  Your program should be able to print the result after you choose snake/water or gun

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = (rand() % 3) + 0; // 0 se 2 tak random no. chun kar dega
    /*
    0--> snake
    1--> water
    2--> gun
    Snake beats Water, Water beats Gun, and Gun beats Snake
    */
    printf("Choose 0 for snake,1 for water and 2 for gun\n");
    scanf("%d", &player);
    printf("Computer chose %d\n", computer);
    if (player == 0 && computer == 0)
    {
        printf("Its a draw!!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You lost!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You lost!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a draw!!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You lost!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a draw!\n");
    }
    else
    {
        printf("Something went wrong,Please try again!!\n");
    }
    return 0;
}