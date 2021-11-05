#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define PROJECTNAME /*"[C Project: 'Bad Apple']"*/ "C Project - '[Touhou] Bad Apple!! PV [Shadow] - [ASCII]'"
#define DIRECTORY "res"
#define PREFISSO "/BA"
#define FILETOT "/numberOfFrames.txt"
#define LEN 68
#define INIZIO 0
#define WAIT 23
#define LARGHEZZA 80
#define DEBUG 1
#define FPS 30


void durchschnitt() {
    char str[80];
    const char s[2] = " ";
    char *token;
    int count = 0;
    char numbers[80] = {0};
    int total = 0;

    printf("Bitte geben Sie die Zahlen ein (zwischen 4 und 6 durch Leerschlag getrennt):");
    scanf(" %[^\n]", str);
    /* get the first token */
    token = strtok(str, s);
    /* walk through other tokens */
    while (token != NULL) {
        int x = atof(token);
        numbers[count] = x;
        count++;
        token = strtok(NULL, s);
    }
    unsigned int length = strlen(numbers);
    if (length < 4) {
        printf("that's under 4 you dumbo \n");
    } else if (length > 6) {
        printf("that's over 6 u dumbo\n");
    } else {
        for (int i = 0; i < length; i++) {
            total += numbers[i];
        }
        printf("Average = %f\n", total / (float) length);
    }
}


int printRandom(int low, int up, int cou) {
    int i;
    for (i = 0; i < cou; i++) {
        int number = (rand() % (up - low + 1)) + low;
        return number;
    }
}


void guess(int N) {
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
        if (guess > number) {
            printf("Lower number please!\n");
            numberofguess++;
        } else if (number > guess) {
            printf("Higher number please!\n");
            numberofguess++;
        } else if (number == guess)
            printf("\n\n\n"
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
                   "You guessed the number in %d attempts!\n", numberofguess);

    } while (guess != number);
}

void guessgame() {
    int N = 100;
    // Function call
    guess(N);
}


char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkwin();

void board();


void tictactoe() {

    int player = 1, i, choice;
    char mark;
    do {
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
        else {
            printf("Invalid move ");
            player--;
            getch();
        }
        i = checkwin();
        player++;
    } while (i == -1);
    board();
    if (i == 1)
        printf(
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


int checkwin() {
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
        return -1;
}

void board() {
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


void rocpapsci() {
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
                    printf("Opponent used \"Rock Throw\"! Both competitors are unable to keep fighting.\n\n "
                           "$$\\   $$\\  $$\\                                $$$$$$$\\                                   $$\\ \n"
                           "\\__|  $$ | $  |                               $$  __$$\\                                  $$ |\n"
                           "$$\\ $$$$$$\\\\_/ $$$$$$$\\        $$$$$$\\        $$ |  $$ | $$$$$$\\  $$$$$$\\  $$\\  $$\\  $$\\ $$ |\n"
                           "$$ |\\_$$  _|  $$  _____|       \\____$$\\       $$ |  $$ |$$  __$$\\ \\____$$\\ $$ | $$ | $$ |$$ |\n"
                           "$$ |  $$ |    \\$$$$$$\\         $$$$$$$ |      $$ |  $$ |$$ |  \\__|$$$$$$$ |$$ | $$ | $$ |\\__|\n"
                           "$$ |  $$ |$$\\  \\____$$\\       $$  __$$ |      $$ |  $$ |$$ |     $$  __$$ |$$ | $$ | $$ |    \n"
                           "$$ |  \\$$$$  |$$$$$$$  |      \\$$$$$$$ |      $$$$$$$  |$$ |     \\$$$$$$$ |\\$$$$$\\$$$$  |$$\\ \n"
                           "\\__|   \\____/ \\_______/        \\_______|      \\_______/ \\__|      \\_______| \\_____\\____/ \\__|");
                }
                if (x == 1) {
                    printf("Opponent used \"Paper Bomb\"! You were knocked out.\n\n"
                           "$$\\                                               $$\\                 $$\\                 \n"
                           "$$ |                                              $$ |                $$ |                \n"
                           "$$ | $$$$$$\\   $$$$$$\\   $$$$$$$\\  $$$$$$\\        $$$$$$$\\   $$$$$$\\  $$$$$$$\\   $$$$$$\\  \n"
                           "$$ |$$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\       $$  __$$\\  \\____$$\\ $$  __$$\\  \\____$$\\ \n"
                           "$$ |$$ /  $$ |$$ /  $$ |\\$$$$$$\\  $$ |  \\__|      $$ |  $$ | $$$$$$$ |$$ |  $$ | $$$$$$$ |\n"
                           "$$ |$$ |  $$ |$$ |  $$ | \\____$$\\ $$ |            $$ |  $$ |$$  __$$ |$$ |  $$ |$$  __$$ |\n"
                           "$$ |\\$$$$$$  |\\$$$$$$  |$$$$$$$  |$$ |            $$ |  $$ |\\$$$$$$$ |$$ |  $$ |\\$$$$$$$ |\n"
                           "\\__| \\______/  \\______/ \\_______/ \\__|            \\__|  \\__| \\_______|\\__|  \\__| \\_______|"
                           ""
                           "\n\n-9999999999999999 social credit");
                }
                if (x == 2) {
                    printf("Opponent used \"X-Scissor\"! He missed and fainted because of your \"Rock Throw.\"\n\n\n"
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
                           "                                                                    "
                           "");
                }
                break;
            case (2):
                if (x == 0) {
                    printf("Opponent used \"Rock Throw\"! He missed and fainted because of your \"Paper Claw\".\n\n\n"
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
                    printf("Opponent used \"Paper Bomb\"! Both competitors are unable to keep fighting.\n\n"
                           "$$\\   $$\\  $$\\                                $$$$$$$\\                                   $$\\ \n"
                           "\\__|  $$ | $  |                               $$  __$$\\                                  $$ |\n"
                           "$$\\ $$$$$$\\\\_/ $$$$$$$\\        $$$$$$\\        $$ |  $$ | $$$$$$\\  $$$$$$\\  $$\\  $$\\  $$\\ $$ |\n"
                           "$$ |\\_$$  _|  $$  _____|       \\____$$\\       $$ |  $$ |$$  __$$\\ \\____$$\\ $$ | $$ | $$ |$$ |\n"
                           "$$ |  $$ |    \\$$$$$$\\         $$$$$$$ |      $$ |  $$ |$$ |  \\__|$$$$$$$ |$$ | $$ | $$ |\\__|\n"
                           "$$ |  $$ |$$\\  \\____$$\\       $$  __$$ |      $$ |  $$ |$$ |     $$  __$$ |$$ | $$ | $$ |    \n"
                           "$$ |  \\$$$$  |$$$$$$$  |      \\$$$$$$$ |      $$$$$$$  |$$ |     \\$$$$$$$ |\\$$$$$\\$$$$  |$$\\ \n"
                           "\\__|   \\____/ \\_______/        \\_______|      \\_______/ \\__|      \\_______| \\_____\\____/ \\__|");
                }
                if (x == 2) {
                    printf("Opponent used \"X-Scissor\"! You were knocked out.\n\n"
                           "$$\\                                               $$\\                 $$\\                 \n"
                           "$$ |                                              $$ |                $$ |                \n"
                           "$$ | $$$$$$\\   $$$$$$\\   $$$$$$$\\  $$$$$$\\        $$$$$$$\\   $$$$$$\\  $$$$$$$\\   $$$$$$\\  \n"
                           "$$ |$$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\       $$  __$$\\  \\____$$\\ $$  __$$\\  \\____$$\\ \n"
                           "$$ |$$ /  $$ |$$ /  $$ |\\$$$$$$\\  $$ |  \\__|      $$ |  $$ | $$$$$$$ |$$ |  $$ | $$$$$$$ |\n"
                           "$$ |$$ |  $$ |$$ |  $$ | \\____$$\\ $$ |            $$ |  $$ |$$  __$$ |$$ |  $$ |$$  __$$ |\n"
                           "$$ |\\$$$$$$  |\\$$$$$$  |$$$$$$$  |$$ |            $$ |  $$ |\\$$$$$$$ |$$ |  $$ |\\$$$$$$$ |\n"
                           "\\__| \\______/  \\______/ \\_______/ \\__|            \\__|  \\__| \\_______|\\__|  \\__| \\_______|"
                           "-9999999999999999 social credit");
                }
                break;
            case (3):
                if (x == 0) {
                    printf("Opponent used \"Rock Throw\"! You were knocked out.\n\n"
                           "$$\\                                               $$\\                 $$\\                 \n"
                           "$$ |                                              $$ |                $$ |                \n"
                           "$$ | $$$$$$\\   $$$$$$\\   $$$$$$$\\  $$$$$$\\        $$$$$$$\\   $$$$$$\\  $$$$$$$\\   $$$$$$\\  \n"
                           "$$ |$$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\       $$  __$$\\  \\____$$\\ $$  __$$\\  \\____$$\\ \n"
                           "$$ |$$ /  $$ |$$ /  $$ |\\$$$$$$\\  $$ |  \\__|      $$ |  $$ | $$$$$$$ |$$ |  $$ | $$$$$$$ |\n"
                           "$$ |$$ |  $$ |$$ |  $$ | \\____$$\\ $$ |            $$ |  $$ |$$  __$$ |$$ |  $$ |$$  __$$ |\n"
                           "$$ |\\$$$$$$  |\\$$$$$$  |$$$$$$$  |$$ |            $$ |  $$ |\\$$$$$$$ |$$ |  $$ |\\$$$$$$$ |\n"
                           "\\__| \\______/  \\______/ \\_______/ \\__|            \\__|  \\__| \\_______|\\__|  \\__| \\_______|"
                           "\n\n-9999999999999999 social credit");
                }
                if (x == 1) {
                    printf("Opponent used \"Paper Bomb\"! He missed and fainted because of your \"Scissor slice\".\n\n\n"
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
                    printf("Opponent used \"X-Scissor\"! Both competitors are unable to keep fighting.\n\n "
                           "$$\\   $$\\  $$\\                                $$$$$$$\\                                   $$\\ \n"
                           "\\__|  $$ | $  |                               $$  __$$\\                                  $$ |\n"
                           "$$\\ $$$$$$\\\\_/ $$$$$$$\\        $$$$$$\\        $$ |  $$ | $$$$$$\\  $$$$$$\\  $$\\  $$\\  $$\\ $$ |\n"
                           "$$ |\\_$$  _|  $$  _____|       \\____$$\\       $$ |  $$ |$$  __$$\\ \\____$$\\ $$ | $$ | $$ |$$ |\n"
                           "$$ |  $$ |    \\$$$$$$\\         $$$$$$$ |      $$ |  $$ |$$ |  \\__|$$$$$$$ |$$ | $$ | $$ |\\__|\n"
                           "$$ |  $$ |$$\\  \\____$$\\       $$  __$$ |      $$ |  $$ |$$ |     $$  __$$ |$$ | $$ | $$ |    \n"
                           "$$ |  \\$$$$  |$$$$$$$  |      \\$$$$$$$ |      $$$$$$$  |$$ |     \\$$$$$$$ |\\$$$$$\\$$$$  |$$\\ \n"
                           "\\__|   \\____/ \\_______/        \\_______|      \\_______/ \\__|      \\_______| \\_____\\____/ \\__|");
                }
                break;
            default:
                printf("You tried to run from battle and failed. You lost your Honor!\n"
                       "$$\\                                               $$\\                 $$\\                 \n"
                       "$$ |                                              $$ |                $$ |                \n"
                       "$$ | $$$$$$\\   $$$$$$\\   $$$$$$$\\  $$$$$$\\        $$$$$$$\\   $$$$$$\\  $$$$$$$\\   $$$$$$\\  \n"
                       "$$ |$$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\       $$  __$$\\  \\____$$\\ $$  __$$\\  \\____$$\\ \n"
                       "$$ |$$ /  $$ |$$ /  $$ |\\$$$$$$\\  $$ |  \\__|      $$ |  $$ | $$$$$$$ |$$ |  $$ | $$$$$$$ |\n"
                       "$$ |$$ |  $$ |$$ |  $$ | \\____$$\\ $$ |            $$ |  $$ |$$  __$$ |$$ |  $$ |$$  __$$ |\n"
                       "$$ |\\$$$$$$  |\\$$$$$$  |$$$$$$$  |$$ |            $$ |  $$ |\\$$$$$$$ |$$ |  $$ |\\$$$$$$$ |\n"
                       "\\__| \\______/  \\______/ \\_______/ \\__|            \\__|  \\__| \\_______|\\__|  \\__| \\_______|"
                       "\n\n-9999999999999999 social credit");
                break;
        }
        printf("\n\nDo you want to play again?\n");
        printf("(1) Yes\n");
        printf("(2) No\n");
        scanf("%d", &exit);

    } while (exit == 1);
}


double Ctof(double num1) {
    double result;

    result = num1 - 32.0;
    result = result * (5.0 / 9.0);

    return result;

}

double Ftoc(double num1) {
    double result;

    result = num1 * (9.0 / 5.0);
    result = result + 32.0;

    return result;
}

void umrechner() {
    int cf;
    double num1 = 1.0;
    double ret;

    printf("\n");
    printf("F in C: 1\nC in F: 2 \n");
    scanf("%d", &cf);

    printf("Zahl 1:");
    scanf("%lf", &num1);


    if (cf == 69) {
        printf("haha the funny number \n");
    } else if (cf == 1) {
        ret = Ctof(num1);
        printf("%lf\n", ret);
    } else if (cf == 2) {
        ret = Ftoc(num1);
        printf("%lf\n", ret);
    } else {
        printf("this is not a valid number :(");
    }
}



//##################################################################################################################


int getTotFrames(char *dir);
char *saveFrame(int i, char *dir);
char **saveFrames(char *dir, int totFrames);
void play(char **framse, int totFrames);
void progressBar(int corrente, int tot, int r, int frames);

int BADAPPLE()
{
    int totFrames;
    char **frames;
    totFrames=getTotFrames(DIRECTORY);

    printf("%s\n", PROJECTNAME);
    system("PAUSE");

    if(totFrames==-1)
        return totFrames;

    frames=saveFrames(DIRECTORY, totFrames);

    if(frames==NULL)
        return -1;

    printf("(PLAY) --> ");
    system("PAUSE");

    play(frames, totFrames);

    return 0;
}

void play(char **frames, int totFrames)
{
    int i, j;

    for(i=INIZIO;i<totFrames;i++)
    {
#if DEBUG
        char framesCount[100];
        sprintf(framesCount, "(frame: %d/%d) \n", i+1, totFrames);
        printf(PROJECTNAME);
        int x=LARGHEZZA-strlen(PROJECTNAME)-strlen(framesCount);
        for(j=0;j<=x;j++)
            printf(" ");
        printf("%s", framesCount);
        printf("%s", frames[i]);
        progressBar(i, totFrames, 0, 0);
        _sleep(WAIT);
#else
        printf("%s\n", frames[i]);
        _sleep(WAIT);
#endif
    }

}

void progressBar(int corrente, int tot, int r, int frames)
{
    corrente++;
    int cost, x;

    int i;
    float p = (float)((float)corrente/tot)*100;

    if(r==0)
    {
        cost=0;
        x=(corrente*(LEN-cost))/tot;

        printf("[");
        for(i=0;i<=x;i++)
            printf("#");
        for(i=0;i<LEN-x;i++)
            printf("-");
        printf("](%.2f%%)\n", p);
    }
    else if(r==1 && frames==1)
    {
        cost=25;
        x=(corrente*(LEN-cost))/tot;

        printf("saving frames: %d/%d ", corrente, tot);
        printf("[");
        for(i=0;i<=x;i++)
            printf("#");
        for(i=0;i<LEN-cost-x;i++)
            printf("-");
        printf("] (%.1f%%)\r", p);
    }
}

char **saveFrames(char *dir, int totFrames)
{
    int i;
    char **frames;
    frames=calloc(totFrames, sizeof(char*));

    for(i=INIZIO;i<totFrames;i++)
    {
        frames[i]=saveFrame(i, DIRECTORY);
#if DEBUG
        progressBar(i, totFrames, 1, 1);
#endif // DEBUG
    }
    printf("\n");

    return frames;
}

char *saveFrame(int i, char *dir)
{
    i++;
    char fileName[200], suffix[10];
    strcpy(fileName, dir);
    strcat(fileName, PREFISSO);
    sprintf(suffix, "%d.txt", i);
    strcat(fileName, suffix);

    FILE *f = fopen(fileName, "rb");
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);

    char *string = malloc(fsize + 1);
    fread(string, 1, fsize, f);
    fclose(f);

    string[fsize] = '\0';

    return string;
}

int getTotFrames(char *dir)
{
    char fileName[200];
    strcpy(fileName, dir);
    strcat(fileName, FILETOT);
    int tot=-1;

    FILE *fin=fopen(fileName, "r");

    if(fin==NULL)
        return tot;

    fscanf(fin, "%d", &tot);
    fclose(fin);

    return tot;
}