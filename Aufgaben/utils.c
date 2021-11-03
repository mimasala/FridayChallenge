//
// Created by mytal on 11/3/2021.
//
//cringe und so ne
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>



void durchschnitt () {
    char str[80];
    const char s[2] = " ";
    char *token;
    int count = 0;
    char numbers[80] = {0};
    int total = 0;

    printf("Bitte geben Sie die Zahlen ein (durch Leerschlag getrennt):");
    scanf(" %[^\n]",str);

    /* get the first token */
    token = strtok(str, s);

    /* walk through other tokens */
    while( token != NULL ) {
        int x = atof(token);
        numbers[count] = x;
        count++;
        token = strtok(NULL, s);
    }

    unsigned int length = strlen(numbers);

    if (length <= 6){
        printf("that's not between 4 and 6 you dumbo");
    }

    for(int i = 0; i < length; i++) {
        total += numbers[i];
    }
    printf("Average = %f\n", total/(float)length);


}


int printRandom(int low, int up, int cou)
{
    int i;
    for (i = 0; i < cou; i++) {
        int number = (rand() % (up - low + 1)) + low;
        return number;
    }
}



void guess(int N)
{
    int number, guess, numberofguess = 0;
    int lower = 1, upper = 100, count = 1;


    srand(time(0));

    number = rand() % N;
    printRandom(lower, upper, count);

    printf("Guess a number between 1 and %d\n", N);


    do {

        if (numberofguess > 9) {
            printf("\nYou Loose!\n");
            break;
        }


        scanf("%d", &guess);


        if (guess > number)

        {
            printf("Lower number please!\n");
            numberofguess++;
        }


        else if (number > guess)

        {
            printf("Higher number please!\n");
            numberofguess++;
        }


        else if (number == guess)
            printf("You guessed the number in %d attempts!\n", numberofguess);

    } while (guess != number);
}

void guessgame()
{
    int N = 100;

    // Function call
    guess(N);


}



char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();


void tictactoe() {


    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
        else if (choice == 69)
            printf("haha the funny number");

        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);

    board();

    if (i == 1)
        printf("Opponent used \"Paper Bomb\"! He missed and fainted because of your \"Scissor slice\".\n\n \n"
               "$$\\     $$\\                                       $$\\           $$\\ \n"
               "\\$$\\   $$  |                                      \\__|          $$ |\n"
               " \\$$\\ $$  /$$$$$$\\  $$\\   $$\\       $$\\  $$\\  $$\\ $$\\ $$$$$$$\\  $$ |\n"
               "  \\$$$$  /$$  __$$\\ $$ |  $$ |      $$ | $$ | $$ |$$ |$$  __$$\\ $$ |\n"
               "   \\$$  / $$ /  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |\\__|\n"
               "    $$ |  $$ |  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |    \n"
               "    $$ |  \\$$$$$$  |\\$$$$$$  |      \\$$$$$\\$$$$  |$$ |$$ |  $$ |$$\\ \n"
               "    \\__|   \\______/  \\______/        \\_____\\____/ \\__|\\__|  \\__|\\__|\n"
               "                                                                    \n"
               "                                                                    \n"
               "                                                                    \n "
               "==>\aPlayer %d win ", --player);


    else
        printf("==>\aGame draw");

    getch();

}



int checkwin()
{



    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
                                                                         != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;





}


void board(){



    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");




}


void rocpapsci(){
    int input;
    int nMax = 2;
    int nMin = 0;
    int exit = 0;

    do {
        srand(time(NULL));
        int x = rand() % ((nMax + 1) - nMin) + nMin;

        printf("Rock(1), Paper(2), or Scissors(3): \n");
        scanf("%d", &input);
        switch (input) {
            case (1):
                if (x == 0) {
                    printf("Opponent used \"Rock Throw\"! Both competitors are unable to keep fighting.\n\n It's a draw!");
                }
                if (x == 1) {
                    printf("Opponent used \"Paper Bomb\"! You were knocked out.\n\n You lost!");
                }
                if (x == 2) {
                    printf("Opponent used \"X-Scissor\"! He missed and fainted because of your \"Rock Throw.\"\n\n \n"
                           "$$\\     $$\\                                       $$\\           $$\\ \n"
                           "\\$$\\   $$  |                                      \\__|          $$ |\n"
                           " \\$$\\ $$  /$$$$$$\\  $$\\   $$\\       $$\\  $$\\  $$\\ $$\\ $$$$$$$\\  $$ |\n"
                           "  \\$$$$  /$$  __$$\\ $$ |  $$ |      $$ | $$ | $$ |$$ |$$  __$$\\ $$ |\n"
                           "   \\$$  / $$ /  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |\\__|\n"
                           "    $$ |  $$ |  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |    \n"
                           "    $$ |  \\$$$$$$  |\\$$$$$$  |      \\$$$$$\\$$$$  |$$ |$$ |  $$ |$$\\ \n"
                           "    \\__|   \\______/  \\______/        \\_____\\____/ \\__|\\__|  \\__|\\__|\n"
                           "                                                                    \n"
                           "                                                                    \n"
                           "                                                                    ");
                }
                break;
            case (2):
                if (x == 0) {
                    printf("Opponent used \"Rock Throw\"! He missed and fainted because of your \"Paper Claw\".\n\n \n"
                           "$$\\     $$\\                                       $$\\           $$\\ \n"
                           "\\$$\\   $$  |                                      \\__|          $$ |\n"
                           " \\$$\\ $$  /$$$$$$\\  $$\\   $$\\       $$\\  $$\\  $$\\ $$\\ $$$$$$$\\  $$ |\n"
                           "  \\$$$$  /$$  __$$\\ $$ |  $$ |      $$ | $$ | $$ |$$ |$$  __$$\\ $$ |\n"
                           "   \\$$  / $$ /  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |\\__|\n"
                           "    $$ |  $$ |  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |    \n"
                           "    $$ |  \\$$$$$$  |\\$$$$$$  |      \\$$$$$\\$$$$  |$$ |$$ |  $$ |$$\\ \n"
                           "    \\__|   \\______/  \\______/        \\_____\\____/ \\__|\\__|  \\__|\\__|\n"
                           "                                                                    \n"
                           "                                                                    \n"
                           "                                                                    ");
                }
                if (x == 1) {
                    printf("Opponent used \"Paper Bomb\"! Both competitors are unable to keep fighting.\n\n It's a draw!");
                }
                if (x == 2) {
                    printf("Opponent used \"X-Scissor\"! You were knocked out.\n\n You lost!");
                }
                break;
            case (3):
                if (x == 0) {
                    printf("Opponent used \"Rock Throw\"! You were knocked out.\n\n You lost!");
                }
                if (x == 1) {
                    printf("Opponent used \"Paper Bomb\"! He missed and fainted because of your \"Scissor slice\".\n\n \n"
                           "$$\\     $$\\                                       $$\\           $$\\ \n"
                           "\\$$\\   $$  |                                      \\__|          $$ |\n"
                           " \\$$\\ $$  /$$$$$$\\  $$\\   $$\\       $$\\  $$\\  $$\\ $$\\ $$$$$$$\\  $$ |\n"
                           "  \\$$$$  /$$  __$$\\ $$ |  $$ |      $$ | $$ | $$ |$$ |$$  __$$\\ $$ |\n"
                           "   \\$$  / $$ /  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |\\__|\n"
                           "    $$ |  $$ |  $$ |$$ |  $$ |      $$ | $$ | $$ |$$ |$$ |  $$ |    \n"
                           "    $$ |  \\$$$$$$  |\\$$$$$$  |      \\$$$$$\\$$$$  |$$ |$$ |  $$ |$$\\ \n"
                           "    \\__|   \\______/  \\______/        \\_____\\____/ \\__|\\__|  \\__|\\__|\n"
                           "                                                                    \n"
                           "                                                                    \n"
                           "                                                                    ");
                }
                if (x == 2) {
                    printf("Opponent used \"X-Scissor\"! Both competitors are unable to keep fighting.\n\n It's a draw!");
                }
                break;
            default:
                printf("You tried to run from battle and failed. You lost your Honor!\n");
                break;
        }
        printf("\n\nDo you want to play again?\n");
        printf("(1) Yes\n");
        printf("(2) No\n");
        scanf("%d", &exit);

    } while (exit == 1);
}


