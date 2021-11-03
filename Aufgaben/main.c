#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
#include <stddef.h>
#include <time.h>

#include "EggGAME.h"
#include "utils.h"


int printRandoms(int lower, int upper,
                  int count);

int main() {
    int yn ;

    do {


    int choose;

    printf("                                            --------------------------------\n");
    printf("                                            |    Von Mischa Ismael Joao    |\n");
    printf("                                            |                              |\n");
    printf("                                            |    1. Guessing Game          |\n");
    printf("                                            |    2. TicTacToe              |\n");
    printf("                                            |    3. Rock Paper Scissors    |\n");
    printf("                                            |    4. Random Game            |\n");
    printf("                                            |                              |\n");
    printf("                                            |    5. Durchschnittsrechner   |\n");
    printf("                                            |    6. Notenberechner         |\n");
    printf("                                            |    7. Einheitenumrechner     |\n");
    printf("                                            |                              |\n");
    printf("                                            --------------------------------\n");
    printf("                                            Choose a game: ");
    scanf("%d", &choose);
    if (choose >6 || choose < 1) {
        printf("                                            NUMBER BETWEEN 1 AND 4: ");
        scanf("%d", &choose);
    }

    if(choose == 4){
        int lower = 1, upper = 3, count = 1;
        srand(time(0));
        int n  = printRandoms(lower, upper, count);
        choose = n;
    }

    if (choose == 1) {
        printf("\n");
        guessgame();
    }
    if (choose == 2) {
        printf("\n");
        tictactoe();
    }

    if (choose == 3){
        printf("\n");
        rocpapsci();
    }

    if (choose  == 5) {
        printf("\n");
        durchschnitt();
    }

    if (choose  == 6) {
        printf("\n");
        notenrechner();
    }
        printf("restart program selection?\n(1)Yes\n(0)No\n");
        scanf("%d",&yn);
} while (yn == 1);


}

int printRandoms(int lower, int upper,
                  int count)
{
    for (int i = 0; i < count;) {

        int num = (rand() % (upper - lower + 1)) + lower;

        ++i;

        return num;

    }
}
