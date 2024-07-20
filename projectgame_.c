
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int random_number = (rand()%100)+1;
    int no_of_guesss=0;
    int guessed;

    // Print the random number
   // printf("Random number between 0 and 100: %d\n", random_number);
    do {
        printf("Guess the number\n");
        scanf("%d", &guessed);
        if(guessed>random_number){
        printf("lower number plsease\n");
        }
        else{
            printf("higher number please\n");
        }
        no_of_guesss++;
    } while (guessed != random_number);

    {
        printf("you guessed the number right congo in %d guesses" , no_of_guesss);
    }
    

    return 0;
}
