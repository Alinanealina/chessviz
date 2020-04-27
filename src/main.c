#include "head.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char chess[8][9]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r', '1'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', '2'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '3'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '4'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '5'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '6'},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '7'},
               {'N', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', '8'}};

    do {
        system("CLS");
        printChess(chess);
        moveP(chess);
        system("CLS");
        printChess(chess);
        printf("\n\t\t\tZakonchit' igru?\n\t\t\tDa - nazhmite 1.\n\t\tNet - "
               "nazhmite lyubuyu druguyu klavishu\n");
    } while (_getch() != '1');
    return 0;
}
