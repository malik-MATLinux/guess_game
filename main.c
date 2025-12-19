#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(int input, int answer, int attempts, int chances);

int main(){

    srand(time(NULL));

    int input;
    int attempts = 1;
    int chances = 15;
    int tries = 5;
    int min = 1;
    int max = 100;

    int answer = (rand() % (max - min + 1)) + min;

    printf("######### Welcome to the game of guessing numbers ########\n\n");
    
    printf("        £nter your gu£$$    :");
    scanf("%d", &input);

    guess(input, answer, attempts, chances);
    return 0;
}

void guess(int input, int answer, int attempts, int chances){
    for (int i = 0; i < chances; i++)
        {
            if (input == answer)
            {
                printf("\n\n       #############################          \n           TADAAAAAA , Correct   \n      #############################\n\n\n");
                break;
            }
            else if (input < answer)
            {
                printf("Your guess is too low. Try again:   ");
                attempts ++;
                scanf("%d", &input);
            }
            else if (input > answer)
            {
                printf("Your guess is too high. Try again:   ");
                attempts ++;
                scanf("%d", &input);
            }
            else
            {
                if (attempts >= chances && attempts <= chances)
                {
                    printf("Sorry, you've used all your attempts. The correct answer was %d.\n\n\n\n", answer);
                }else{

                    printf("OH OH..... Wrong guess, Try again:   ");
                    attempts ++;
                    scanf("%d", &input); 
                }
                
                
            }
            
            
        }
}

void cald_attempts(int total_attempts){


}