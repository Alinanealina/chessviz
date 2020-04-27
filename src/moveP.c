#include <stdio.h>
int coordchange(char c)
{
    switch (c) {
    case 'a':
    case '1':
        return 0;
        break;
    case 'b':
    case '2':
        return 1;
        break;
    case 'c':
    case '3':
        return 2;
        break;
    case 'd':
    case '4':
        return 3;
        break;
    case 'e':
    case '5':
        return 4;
        break;
    case 'f':
    case '6':
        return 5;
        break;
    case 'g':
    case '7':
        return 6;
        break;
    case 'h':
    case '8':
        return 7;
        break;
    default:
        return 10;
    }
}
void moveP(char chess[8][9], char hod[5])
{
    int x, y, x0, y0;
    while (1) {
        if ((hod[2] == '-') || (hod[2] == 'x')) {
            y0 = coordchange(hod[0]);
            x0 = coordchange(hod[1]);
            y = coordchange(hod[3]);
            x = coordchange(hod[4]);
            if ((x0 != 10) && (x != 10) && (y0 != 10) && (y != 10)) {
                if ((chess[x0][y0] == 'P')) {
                    chess[x0][y0] = ' ';
                    chess[x][y] = 'P';

                    break;
                } else if ((chess[x0][y0] == 'p')) {
                    chess[x0][y0] = ' ';
                    chess[x][y] = 'p';
                    break;
                } else {
                    printf("\n Nevozmozhnyi hod. Vvedite zanovo. ");
                    continue;
                }
            } else {
                printf("\n Nevozmozhnyi hod. Vvedite zanovo. ");
                continue;
            }
        } else
            printf("\n Nevozmozhnyi hod. Vvedite zanovo. ");
    }
}
