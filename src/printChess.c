#include <stdio.h>
void printChess(char chess[8][9])
{
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 9; j++)
            printf(" %c ", chess[i][j]);
        printf("\n");
    }
    printf(" a  b  c  d  e  f  g  h ");
}
