#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
#include <stddef.h>
#include <time.h>
#include "utils.h"


int printRandoms(int lower, int upper,
                  int count);

int main() {
    int yn ;

    do {
        system("cls");

    int choose;

    printf("--------------------------------  &#/&/ . /x,,.....,.*&(                                               ,#&@#*.....\n");
    printf("|    Von Mischa Ismael Joao    |  @#/@/ ...x&**,...,...*&(       ...,,*//((//*,,..                ,#@&(,....,,....\n");
    printf("|                              |  @#/@/ ....&x***.,,..,,.,&&&@@&x(((///(((((((((////***#&@&(#x&@@#,.,.....,,...,,,\n");
    printf("|    1. Guessing Game          |  @#/&(  ... &x**/*,...(&&x####x##((((((((((((((((((#######(#x@/....,....,,*******\n");
    printf("|    2. TicTacToe              |  @#*xx  ....,&x****&&xxx#xxx#((((((((((((((((((((((((((###(####@/*////////////*/x\n");
    printf("|    3. Rock Paper Scissors    |  @#*(&. ..... x#&&#xxxx&x/**/(((((#(#(((((((((#((((##((((((#((###xx*********#&*..\n");
    printf("|    4. Random Game            |  @x*/&(  ....*@##xxxxx#((///((((x&(* ....(((####(((((##(((#/**,(##(#@****x@,.... \n");
    printf("|                              |  &x**#@....(&#(#####((((((((((x&&((.....,(***/###((((((##((((((((((((#&(, .....  \n");
    printf("|    5. Durchschnittsrechner   |  (&***&# /&#(####(((((((((((#&#@#(#,...,(((//####((((((((x#(((((##(((((#x ....   \n");
    printf("|    6. Notenberechner         |  .@(,,*&&&#(###((((((((((#(#(,xx((((/*/((((((##xx(((((((((#x(x((((###((((&/  .  .\n");
    printf("|    7. Einheitenumrechner     |   #&,&@&x#((#((((((((((((#(,*,x((((#((((((((###x#x(((((((((#&((((((####///x(   #x\n");
    printf("|                              |   *@@&xx#(((((((((((((##(**. *&(((##((((((((##xx*(#(((#((((((&#(((((####(/*#x*x/*\n");
    printf("--------------------------------   #@&x&#(((((((((((((#x/,    (x((####((((((((#xx/(##(((###((((x#/((((####x#,#x,/*\n");
    printf("                                  ,@@x&#((((((((((((#xx.*xx&, (x(#####((((((((#x#*(//#(((###x(((xx/////(&x,.x(#/*x\n");
    printf("                                  &@&x#/((((((((((((&* ,,.    *#(#x####((((((((x#,.   ,x((#xxxx(/##(***(x.    /x&&\n");
    printf("                                  &&&x((((((((((((#x          .#(#######(((((((x#.      *x/#xxxxx(#(#x/.          \n");
    printf("                                  @&&(((((#((((((x#... .       ((#*(x(###/((/((##......,, ,&(##(###&(            /\n");
    printf("                                  xx#((((##(((((x#. /&*....    *x(/,#x(##((/((((#,..,,/x@&x/,/xx#((##/#*         *\n");
    printf("                                  xx((((##((((/x@@@@@@@&x#*..   (#(,, x####/(/(((*#&@@@&@@@@@@@&//x(((*#*  .x&&x##\n");
    printf("                                  &#((####((#&@@&(,*/(&@&&#*,..  /x*.  ,x#(#/(((#(*(#**#@@@(.,*x@&&#*#/*/xx(/#(###\n");
    printf("                                  x#(######x@&@*.(,   .#@x@x&,..  *#,.    (###(/((&    .&@@@@#,,,.*xxxx///(((###xx\n");
    printf("                                  #((x####x&xx/.,x   .&xx@@@@@*.   .*.       .*(#@&.  ,xx@@@@@( ..,,,/@(//(###xxxx\n");
    printf("                                  #(xxxxxx((#/  .@@@@@(///(##&x       .         .&@@@&/(/(x&&&x     ./@#((/(#(#&xx\n");
    printf("                                  (#xxxxx#(#&,   ,@@@@@x/&&@&@(                  /@@&&&((@*.&@/   ...(@(((((((#&&x\n");
    printf("                                  (x&xx&x#(&@x... .x@&&&#&&&&#        ..          ,@&&&xx&&x&/  .,,.,x&((((((((x&x\n");
    printf("                                  #&xxx&&&(&&@(..... ,(xxx#*                        ,#x&xx#,.,,,*,,./@#((((((((x&x\n");
    printf("                                  #&xxxx&&#&&&&,.,*..........                   .    .........,..,.,&x(((((((((&xx\n");
    printf("                                  #&xxxxxx&&&x@#.,.,......        *&(//((((/***(#.     ...........*@#(((((((((x&&x\n");
    printf("                                  (#&xx#xxx&@&&&*........        ,*,,,,,,,,,,..../      .........,&(((##(##((x&&xx\n");
    printf("                                  (((xx#####x@xx&,....           ,*............../          . ./x@#((#####(/x&&&xx\n");
    printf("                                  @((((x######&&x&&,  .            ./(/*,**,*((../,        .#&xxx@((#x####(#&&&xx#\n");
    printf("                                  x&@#(((######xxxxx&&@&#(*,.                 ,*.,,,/#&&&xxxxxxxx&x/####(((x&&xxx#\n");

    printf("      Choose a Program: ");
    scanf("%d", &choose);
    if (choose >7 || choose < 1) {
        printf("                                            NUMBER BETWEEN 1 AND 7: ");
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
    if (choose  == 7) {
        printf("\n");
        umrechner();
    }
        system("cls");
        printf("restart program selection?\n    (1)Yes\n    (0)No\n");
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
