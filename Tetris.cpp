// DEVELOPED BY AMIRHOSEIN && WROTE WITH HEART !
#include <iostream>
#include <random>
#include <time.h>
#include <conio.h>
using namespace std;
const int width = 10;
const int height = 15;
int legoHeight;
int legoWidth;
int legoHeight2;
int legoWidth2;
int legoHeight3;
int legoWidth3;
int legoHeight4;
int legoWidth4;
char emptyBoard = '_';
char sheklak;
char Board[width][height];
int point = 0;
int emptyNum = 0;
int type;
int pos = 1;
bool exist = false;
bool firsttime = true;
void NewLego();

void initializeBoard()
{

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            Board[i][j] = '_';
        }
    }
}
void LegoDown()
{
    if (type == 1)
    {
        if (Board[legoWidth2 + 1][legoHeight] == emptyBoard && Board[legoWidth2 + 1][legoHeight2] == emptyBoard)
        {
            Board[legoWidth][legoHeight] = emptyBoard;
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2 + 1][legoHeight] = sheklak;
            Board[legoWidth2 + 1][legoHeight2] = sheklak;
        }
        legoWidth++;
        legoWidth2++;
    }
    if (type == 2)
    {

        if (pos == 1)
        {
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight] = emptyBoard;
            Board[legoWidth2][legoHeight3] = emptyBoard;

            Board[legoWidth2 + 1][legoHeight] = sheklak;
            Board[legoWidth2 + 1][legoHeight2] = sheklak;
            Board[legoWidth2 + 1][legoHeight3] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
        }
        if (pos == 2)
        {
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight] = emptyBoard;

            Board[legoWidth3][legoHeight] = sheklak;
            Board[legoWidth3][legoHeight2] = sheklak;
            Board[legoWidth3 + 1][legoHeight2] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4 = legoWidth3 + 1;
        }
        if (pos == 3)
        {
            Board[legoWidth2][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight] = emptyBoard;
            Board[legoWidth2][legoHeight3] = emptyBoard;

            Board[legoWidth3][legoHeight] = sheklak;
            Board[legoWidth3][legoHeight3] = sheklak;
            Board[legoWidth4][legoHeight2] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
        if (pos == 4)
        {
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight3] = emptyBoard;

            Board[legoWidth3][legoHeight3] = sheklak;
            Board[legoWidth2][legoHeight2] = sheklak;
            Board[legoWidth3][legoHeight2] = sheklak;
            Board[legoWidth3 + 1][legoHeight2] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
    }
    if (type == 3)
    {
        if (pos == 1)
        {
            Board[legoWidth][legoHeight] = emptyBoard;
            Board[legoWidth3 + 1][legoHeight] = sheklak;

            Board[legoWidth3][legoHeight2] = emptyBoard;
            Board[legoWidth3 + 1][legoHeight2] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
        }
        if (pos == 2)
        {
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight - 1] = emptyBoard;
            Board[legoWidth2][legoHeight] = emptyBoard;

            Board[legoWidth2 + 1][legoHeight - 1] = sheklak;
            Board[legoWidth2 + 1][legoHeight] = sheklak;
            Board[legoWidth2 + 1][legoHeight2] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
        if (pos == 3)
        {
            Board[legoWidth][legoHeight] = emptyBoard;
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight] = sheklak;
            Board[legoWidth3 + 1][legoHeight2] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
        if (pos == 4)
        {
            Board[legoWidth2][legoHeight] = emptyBoard;
            Board[legoWidth2][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight3] = emptyBoard;

            Board[legoWidth3][legoHeight2] = sheklak;
            Board[legoWidth3][legoHeight3] = sheklak;
            Board[legoWidth3 + 1][legoHeight] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
    }
    if (type == 4)
    {
        if (pos == 1)
        {
            Board[legoWidth][legoHeight] = emptyBoard;
            Board[legoWidth4 + 1][legoHeight] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
        if (pos == 2)
        {
            Board[legoWidth2][legoHeight] = emptyBoard;
            Board[legoWidth2][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight3] = emptyBoard;
            Board[legoWidth2][legoHeight4] = emptyBoard;

            Board[legoWidth2 + 1][legoHeight] = sheklak;
            Board[legoWidth2 + 1][legoHeight2] = sheklak;
            Board[legoWidth2 + 1][legoHeight3] = sheklak;
            Board[legoWidth2 + 1][legoHeight4] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
    }
    if (type == 5)
    {
        if (pos == 1)
        {
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight] = emptyBoard;
            Board[legoWidth][legoHeight3] = emptyBoard;

            Board[legoWidth2][legoHeight3] = sheklak;
            Board[legoWidth3][legoHeight] = sheklak;
            Board[legoWidth3][legoHeight2] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
        if (pos == 2)
        {
            Board[legoWidth][legoHeight] = emptyBoard;
            Board[legoWidth2][legoHeight2] = emptyBoard;

            Board[legoWidth + 2][legoHeight] = sheklak;
            Board[legoWidth2 + 2][legoHeight2] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
    }
    if (type == 6)
    {
        if (pos == 1)
        {
            Board[legoWidth][legoHeight] = emptyBoard;
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight3] = emptyBoard;

            Board[legoWidth + 1][legoHeight] = sheklak;
            Board[legoWidth2 + 1][legoHeight2] = sheklak;
            Board[legoWidth2 + 1][legoHeight3] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
        if (pos == 2)
        {
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight] = emptyBoard;

            Board[legoWidth3][legoHeight2] = sheklak;
            Board[legoWidth3 + 1][legoHeight] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
    }
    if (type == 7)
    {
        if (pos == 1)
        {
            Board[legoWidth3][legoHeight] = emptyBoard;
            Board[legoWidth][legoHeight2] = emptyBoard;

            Board[legoWidth3 + 1][legoHeight] = sheklak;
            Board[legoWidth3 + 1][legoHeight2] = sheklak;
            legoWidth++;
            legoWidth2++;
            legoWidth3++;
        }
        if (pos == 2)
        {
            Board[legoWidth2][legoHeight] = emptyBoard;
            Board[legoWidth2][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight3] = emptyBoard;

            Board[legoWidth3][legoHeight] = sheklak;
            Board[legoWidth3][legoHeight2] = sheklak;
            Board[legoWidth3 + 1][legoHeight3] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
        if (pos == 3)
        {
            Board[legoWidth][legoHeight] = emptyBoard;
            Board[legoWidth][legoHeight2] = emptyBoard;

            Board[legoWidth3 + 1][legoHeight] = sheklak;
            Board[legoWidth + 1][legoHeight + 1] = sheklak;

            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
        if (pos == 4)
        {
            Board[legoWidth2][legoHeight] = emptyBoard;
            Board[legoWidth3][legoHeight2] = emptyBoard;
            Board[legoWidth3][legoHeight3] = emptyBoard;

            Board[legoWidth3 + 1][legoHeight] = sheklak;
            Board[legoWidth3 + 1][legoHeight2] = sheklak;
            Board[legoWidth3 + 1][legoHeight3] = sheklak;
            legoWidth++;
            legoWidth2++;
            legoWidth3++;
            legoWidth4++;
        }
    }
}
void displayBoard()
{

    for (int i = 0; i < width; i++)
    {
        cout << "|";
        for (int j = 0; j < height; j++)
        {

            cout << Board[i][j];
        }

        cout << "|" << endl;
    }
}
int getRandom()
{
    srand(time(0));
    int random = rand() % width - 3;
    return random;
}

void Move()
{
    char charac = getch();
    if (type == 1)
    {
        if (charac == 'a' && legoHeight - 1 >= 0 && Board[legoWidth][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard)
        {
            Board[0][0] = 'A';
            Board[legoWidth][legoHeight - 1] = sheklak;
            Board[legoWidth][legoHeight2] = emptyBoard;
            Board[legoWidth2][legoHeight - 1] = sheklak;
            Board[legoWidth2][legoHeight2] = emptyBoard;
            legoHeight--;
            legoHeight2--;
        }

        if (charac == 'd' && legoHeight2 < height && Board[legoWidth][legoHeight2 + 1] == emptyBoard && Board[legoWidth2][legoHeight2 + 1] == emptyBoard)
        {
            Board[0][0] = 'D';

            Board[legoWidth][legoHeight] = emptyBoard;
            Board[legoWidth2][legoHeight] = emptyBoard;
            Board[legoWidth][legoHeight2 + 1] = sheklak;
            Board[legoWidth2][legoHeight2 + 1] = sheklak;

            legoHeight++;
            legoHeight2++;
        }

        if (charac == 's' && legoWidth + 1 < 11 && Board[legoWidth + 1][legoHeight] == emptyBoard)
        {
            Board[0][0] = 'S';
            Board[legoWidth][legoHeight] = emptyBoard;

            Board[legoWidth][legoHeight2] = emptyBoard;

            Board[legoWidth2 + 1][legoHeight2] = sheklak;

            Board[legoWidth2 + 1][legoHeight] = sheklak;

            legoWidth++;
            legoWidth2++;
        }
    }
    if (type == 2)
    {
        if (charac == 'e')
        {
            pos++;
            exist = false;
            if (pos == 5)
            {
                pos = 1;
                firsttime = false;
                exist = false;
            }
        }

        if (pos == 1)
        {
            if (firsttime == false && exist == false && Board[legoWidth2][legoHeight] == emptyBoard)
            {
                exist = true;

                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight3] = sheklak;
            }
            else if (exist == false && firsttime == false)
            {
                pos = 4;
                exist = true;
                cout << "here2";
            }
            if (charac == 'a' && legoHeight - 1 >= 0 && Board[legoWidth][legoHeight] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard)
            {
                Board[0][0] = 'A';
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
            }
            if (charac == 'd' && legoHeight + 1 < height - 2 && Board[legoWidth][legoHeight3] == emptyBoard && Board[legoWidth2][legoHeight3 + 1] == emptyBoard)
            {
                Board[0][0] = 'D';
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth][legoHeight3] = sheklak;
                Board[legoWidth2][legoHeight3 + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
            }
        }
        if (pos == 2)
        {
            if (exist == false && Board[legoWidth3][legoHeight2] == emptyBoard)
            {
                exist = true;
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth3][legoHeight2] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }

            if (charac == 'd' && legoHeight + 1 < 8 && Board[legoWidth][legoHeight2 + 1] == emptyBoard && Board[legoWidth2][legoHeight2 + 1] && Board[legoWidth3][legoHeight2 + 1] == emptyBoard)
            {

                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth][legoHeight3] = sheklak;
                Board[legoWidth2][legoHeight3] = sheklak;
                Board[legoWidth3][legoHeight3] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
            if (charac == 'a' && legoHeight > 0 && Board[legoWidth][legoHeight2 - 1] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight - 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
        }
        if (pos == 3)
        {
            if (exist == false && Board[legoWidth2][legoHeight3] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }

            if (charac == 'a' && legoHeight > 0 && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight2 - 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight2 - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight3 < height - 1 && Board[legoWidth2][legoHeight3 + 1] == emptyBoard && Board[legoWidth3][legoHeight2 + 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight3 + 1] = sheklak;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2 + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
        if (pos == 4)
        {
            if (exist == false && Board[legoWidth][legoHeight2] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight] = emptyBoard;
            }
            else if (exist == false)
            {
                pos--;
            }
            if (charac == 'a' && legoHeight2 > 0 && Board[legoWidth][legoHeight] == emptyBoard && Board[legoWidth2][legoHeight] == emptyBoard && Board[legoWidth3][legoHeight] == emptyBoard)
            {
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight3 < height && Board[legoWidth][legoHeight2 + 1] == emptyBoard && Board[legoWidth2][legoHeight3 + 1] == emptyBoard && Board[legoWidth3][legoHeight2 + 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth][legoHeight2 + 1] = sheklak;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2 + 1] = sheklak;
                Board[legoWidth2][legoHeight3 + 1] = sheklak;
                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
    }
    if (type == 3)
    {
        if (charac == 'e')
        {
            pos++;
            exist = false;
            if (pos == 5)
            {
                pos = 1;
                firsttime = false;
                exist = false;
            }
        }

        if (pos == 1)
        {
            if (firsttime == false && exist == false && Board[legoWidth][legoHeight] == emptyBoard && Board[legoWidth3][legoHeight2] == emptyBoard)
            {
                exist == true;

                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight2] = sheklak;
            }
            else if (exist == false && firsttime == false)
            {
                pos = 4;
                exist = true;
            }
            if (charac == 'a' && legoHeight - 1 >= 0 && Board[legoWidth][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight - 1] == emptyBoard)
            {
                Board[0][0] = 'A';
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth][legoHeight - 1] = sheklak;
                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
            }
            if (charac == 'd' && legoHeight + 1 < height - 1 && Board[legoWidth][legoHeight2] == emptyBoard && Board[legoWidth2][legoHeight2] == emptyBoard && Board[legoWidth3][legoHeight3] == emptyBoard)
            {
                Board[0][0] = 'D';
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;
                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight2] = sheklak;
                Board[legoWidth3][legoHeight3] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
            }
        }
        if (pos == 2)
        {
            if (exist == false && legoHeight > 0 && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight3 - 1] == emptyBoard && Board[legoWidth][legoHeight3 - 1] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3 - 1] = sheklak;
                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth][legoHeight3 - 1] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }

            if (charac == 'a' && legoHeight > 1 && Board[legoWidth2][legoHeight - 2] == emptyBoard && Board[legoWidth][legoHeight] == emptyBoard)
            {
                Board[legoWidth2][legoHeight - 2] = sheklak;
                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth][legoHeight2] = emptyBoard;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight2 < height - 1 && Board[legoWidth][legoHeight3] == emptyBoard && Board[legoWidth2][legoHeight3] == emptyBoard)
            {
                Board[legoWidth2][legoHeight - 1] = emptyBoard;
                Board[legoWidth][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight3] = sheklak;
                Board[legoWidth2][legoHeight3] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
        if (pos == 3)
        {
            if (exist == false && legoHeight > 0 && Board[legoWidth3][legoHeight2] == emptyBoard)
            {
                exist = true;

                Board[legoWidth2][legoHeight3 - 1] = emptyBoard;
                Board[legoWidth2][legoHeight2 - 1] = emptyBoard;
                Board[legoWidth2][legoHeight - 1] = emptyBoard;
                Board[legoWidth][legoHeight3 - 1] = emptyBoard;

                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight2] = sheklak;
                Board[legoWidth3][legoHeight2] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }
            if (charac == 'a' && legoHeight > 0 && Board[legoWidth][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight2 - 1] == emptyBoard && Board[legoWidth3][legoHeight2 - 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight] = sheklak;
                Board[legoWidth][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight2 + 1 < height && Board[legoWidth][legoHeight2 + 1] == emptyBoard && Board[legoWidth2][legoHeight2 + 1] == emptyBoard && Board[legoWidth3][legoHeight2 + 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight3] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight2 + 1] = sheklak;
                Board[legoWidth2][legoHeight2 + 1] = sheklak;
                Board[legoWidth3][legoHeight2 + 1] = sheklak;
                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
        if (pos == 4)
        {
            if (exist == false && Board[legoWidth3][legoHeight] == emptyBoard && Board[legoWidth2][legoHeight] == emptyBoard && Board[legoWidth2][legoHeight3] == emptyBoard && legoHeight >= 0)
            {
                exist = true;
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight3] = sheklak;
                Board[legoWidth3][legoHeight] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }

            if (charac == 'a' && legoHeight > 0 && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight - 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight - 1] = sheklak;
                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight3 < height - 1 && Board[legoWidth2][legoHeight3 + 1] == emptyBoard && Board[legoWidth3][legoHeight2] == emptyBoard)
            {
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth2][legoHeight3 + 1] = sheklak;
                Board[legoWidth3][legoHeight + 1] = sheklak;
                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
    }
    if (type == 4)
    {
        if (charac == 'e')
        {
            pos++;
            exist = false;
            if (pos == 3)
            {
                pos = 1;
                firsttime = false;
                exist = false;
            }
        }
        if (pos == 1)
        {
            if (exist == false && firsttime == false && Board[legoWidth][legoHeight + 2] == emptyBoard && Board[legoWidth3][legoHeight + 2] == emptyBoard && Board[legoWidth4][legoHeight + 2] == emptyBoard)
            {
                exist = true;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth2][legoHeight4] = emptyBoard;

                legoHeight += 2;
                legoHeight2 += 2;
                legoHeight3 += 2;
                legoHeight4 += 2;

                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight] = sheklak;
                Board[legoWidth4][legoHeight] = sheklak;
            }
            else if (exist == false && firsttime == false)
            {
                pos = 2;
                exist = true;
            }
            if (charac == 'a' && legoHeight - 1 >= 0 && Board[legoWidth][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight - 1] == emptyBoard && Board[legoWidth4][legoHeight - 1] == emptyBoard)
            {
                Board[0][0] = 'A';
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;
                Board[legoWidth4][legoHeight] = emptyBoard;
                Board[legoWidth][legoHeight - 1] = sheklak;
                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight - 1] = sheklak;
                Board[legoWidth4][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight + 1 < height && Board[legoWidth][legoHeight + 1] == emptyBoard && Board[legoWidth2][legoHeight + 1] == emptyBoard && Board[legoWidth3][legoHeight + 1] == emptyBoard && Board[legoWidth4][legoHeight + 1] == emptyBoard)
            {
                Board[0][0] = 'D';
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;
                Board[legoWidth4][legoHeight] = emptyBoard;
                Board[legoWidth][legoHeight + 1] = sheklak;
                Board[legoWidth2][legoHeight + 1] = sheklak;
                Board[legoWidth3][legoHeight + 1] = sheklak;
                Board[legoWidth4][legoHeight + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
        if (pos == 2)
        {
            if (exist == false && legoHeight > 2 && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight - 2] == emptyBoard && Board[legoWidth2][legoHeight + 1] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;
                Board[legoWidth4][legoHeight] = emptyBoard;

                legoHeight -= 2;
                legoHeight2 -= 2;
                legoHeight3 -= 2;
                legoHeight4 -= 2;

                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight3] = sheklak;
                Board[legoWidth2][legoHeight4] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }
            if (charac == 'a' && legoHeight > 0 && Board[legoWidth2][legoHeight - 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight4] = emptyBoard;
                Board[legoWidth2][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }

            if (charac == 'd' && legoHeight4 < height - 1 && Board[legoWidth2][legoHeight4 + 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight4 + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
    }
    if (type == 5)
    {
        if (charac == 'e')
        {
            pos++;
            exist = false;
            if (pos == 3)
            {
                pos = 1;
                firsttime = false;
                exist = false;
            }
        }
        if (pos == 1)
        {
            if (exist == false && firsttime == false && Board[legoWidth][legoHeight2] == emptyBoard && Board[legoWidth][legoHeight3] == emptyBoard && legoHeight3 < height - 1)
            {
                exist = true;
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth][legoHeight3] = sheklak;
            }
            else if (exist == false && firsttime == false)
            {
                pos = 2;
                exist = true;
            }
            if (charac == 'a' && legoHeight - 1 >= 0 && Board[legoWidth][legoHeight] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard)
            {
                Board[0][0] = 'A';
                Board[legoWidth][legoHeight3] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
            }
            if (charac == 'd' && legoHeight3 < height - 1 && Board[legoWidth][legoHeight3 + 1] == emptyBoard && Board[legoWidth2][legoHeight2 + 1] == emptyBoard)
            {
                Board[0][0] = 'D';
                Board[legoWidth2][legoHeight3] = sheklak;
                Board[legoWidth][legoHeight3 + 1] = sheklak;

                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
            }
        }
        if (pos == 2)
        {
            if (exist == false && Board[legoWidth][legoHeight] == emptyBoard && Board[legoWidth3][legoHeight2] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight3] = emptyBoard;
                Board[legoWidth][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight2] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }
            if (charac == 'a' && legoHeight > 0 && Board[legoWidth][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight2 - 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight - 1] = sheklak;
                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight2 - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight3 < height && Board[legoWidth][legoHeight + 1] == emptyBoard && Board[legoWidth2][legoHeight2 + 1] == emptyBoard && Board[legoWidth3][legoHeight2 + 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight2 + 1] = sheklak;
                Board[legoWidth3][legoHeight2 + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
    }
    if (type == 6)
    {
        if (charac == 'e')
        {
            pos++;
            exist = false;
            if (pos == 3)
            {
                pos = 1;
                firsttime = false;
                exist = false;
            }
        }
        if (pos == 1)
        {
            if (exist == false && firsttime == false && Board[legoWidth][legoHeight] == emptyBoard && Board[legoWidth2][legoHeight3] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;
                Board[legoWidth4][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;

                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight3] = sheklak;
            }
            else if (exist == false && firsttime == false)
            {
                pos = 2;
                exist = true;
            }
            if (charac == 'a' && legoHeight - 1 >= 0 && Board[legoWidth][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight] == emptyBoard)
            {
                Board[0][0] = 'A';
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3] = emptyBoard;

                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
            }
            if (charac == 'd' && legoHeight3 < height && Board[legoWidth][legoHeight2 + 1] == emptyBoard && Board[legoWidth2][legoHeight3 + 1] == emptyBoard)
            {
                Board[0][0] = 'D';
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight3] = sheklak;
                Board[legoWidth2][legoHeight3 + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
            }
        }
        if (pos == 2)
        {
            if (exist == false && Board[legoWidth2][legoHeight] == emptyBoard && Board[legoWidth3][legoHeight] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight3] = emptyBoard;

                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }
            if (charac == 'a' && legoHeight > 0 && Board[legoWidth][legoHeight2 - 1] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight - 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth][legoHeight2 - 1] = sheklak;
                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight2 < height - 1 && Board[legoWidth][legoHeight2 + 1] == emptyBoard && Board[legoWidth2][legoHeight2 + 1] == emptyBoard && Board[legoWidth3][legoHeight + 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth][legoHeight2 + 1] = sheklak;
                Board[legoWidth2][legoHeight2 + 1] = sheklak;
                Board[legoWidth3][legoHeight + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
    }
    if (type == 7)
    {
        if (charac == 'e')
        {
            pos++;
            exist = false;
            if (pos == 5)
            {
                pos = 1;
                firsttime = false;
                exist = false;
            }
        }
        if (pos == 1)
        {
            if (exist == false && firsttime == false && Board[legoWidth][legoHeight2] == emptyBoard && Board[legoWidth2][legoHeight2] == emptyBoard)
            {
                exist = true;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight3] = emptyBoard;

                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth2][legoHeight2] = sheklak;
            }
            else if (exist == false && firsttime == false)
            {
                pos = 4;
                exist = true;
            }
            if (charac == 'a' && legoHeight - 1 >= 0 && Board[legoWidth][legoHeight] == emptyBoard && Board[legoWidth2][legoHeight] == emptyBoard && Board[legoWidth3][legoHeight - 1] == emptyBoard)
            {
                Board[0][0] = 'A';
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth3][legoHeight - 1] = sheklak;
                legoHeight--;
                legoHeight2--;
                legoHeight3--;
            }
            if (charac == 'd' && legoHeight + 1 < 9 && Board[legoWidth][legoHeight2 + 1] == emptyBoard && Board[legoWidth2][legoHeight2 + 1] == emptyBoard && Board[legoWidth3][legoHeight2 + 1] == emptyBoard)
            {
                Board[0][0] = 'D';
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth][legoHeight2 + 1] = sheklak;
                Board[legoWidth2][legoHeight2 + 1] = sheklak;
                Board[legoWidth3][legoHeight2 + 1] = sheklak;
                legoHeight++;
                legoHeight2++;
                legoHeight3++;
            }
        }
        if (pos == 2)
        {
            if (exist == false && Board[legoWidth2][legoHeight] == emptyBoard && Board[legoWidth2][legoHeight3] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight2] = emptyBoard;

                Board[legoWidth2][legoHeight] = sheklak;
                Board[legoWidth2][legoHeight3] = sheklak;
                Board[legoWidth3][legoHeight3] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }
            if (charac == 'a' && legoHeight > 0 && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight3 - 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth3][legoHeight3] = emptyBoard;

                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight3 - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight3 < height - 1 && Board[legoWidth2][legoHeight3 + 1] == emptyBoard && Board[legoWidth3][legoHeight3 + 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight3] = emptyBoard;

                Board[legoWidth2][legoHeight3 + 1] = sheklak;
                Board[legoWidth3][legoHeight3 + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
        if (pos == 3)
        {
            if (exist == false && Board[legoWidth][legoHeight] == emptyBoard && Board[legoWidth][legoHeight2] == emptyBoard && Board[legoWidth3][legoHeight] == emptyBoard)
            {
                Board[legoWidth2][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight3] = emptyBoard;
                Board[legoWidth3][legoHeight3] = emptyBoard;

                Board[legoWidth][legoHeight] = sheklak;
                Board[legoWidth][legoHeight2] = sheklak;
                Board[legoWidth3][legoHeight] = sheklak;
            }
            if (charac == 'a' && legoHeight > 0 && Board[legoWidth][legoHeight - 1] == emptyBoard && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight - 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight2] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth][legoHeight - 1] = sheklak;
                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight - 1] = sheklak;

                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight2 < height && Board[legoWidth][legoHeight2 + 1] == emptyBoard && Board[legoWidth2][legoHeight + 1] == emptyBoard && Board[legoWidth3][legoHeight + 1] == emptyBoard)
            {
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth][legoHeight3] = sheklak;
                Board[legoWidth2][legoHeight + 1] = sheklak;
                Board[legoWidth3][legoHeight + 1] = sheklak;

                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
        if (pos == 4)
        {
            if (exist == false && Board[legoWidth3][legoHeight2] == emptyBoard && Board[legoWidth3][legoHeight3] == emptyBoard)
            {
                exist = true;
                Board[legoWidth][legoHeight] = emptyBoard;
                Board[legoWidth][legoHeight2] = emptyBoard;

                Board[legoWidth3][legoHeight2] = sheklak;
                Board[legoWidth3][legoHeight3] = sheklak;
            }
            else if (exist == false)
            {
                pos--;
            }
            if (charac == 'a' && legoHeight > 0 && Board[legoWidth2][legoHeight - 1] == emptyBoard && Board[legoWidth3][legoHeight - 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight3] = emptyBoard;

                Board[legoWidth2][legoHeight - 1] = sheklak;
                Board[legoWidth3][legoHeight - 1] = sheklak;
                legoHeight--;
                legoHeight2--;
                legoHeight3--;
                legoHeight4--;
            }
            if (charac == 'd' && legoHeight3 < height - 1 && Board[legoWidth2][legoHeight + 1] == emptyBoard && Board[legoWidth3][legoHeight3 + 1] == emptyBoard)
            {
                Board[legoWidth2][legoHeight] = emptyBoard;
                Board[legoWidth3][legoHeight] = emptyBoard;

                Board[legoWidth2][legoHeight + 1] = sheklak;
                Board[legoWidth3][legoHeight3 + 1] = sheklak;
                legoHeight++;
                legoHeight2++;
                legoHeight3++;
                legoHeight4++;
            }
        }
    }
}
int checkScore(char Board[width][height])
{

    int score = 0;                 
    int emptyNum = 0;           
    for (int i = 0; i < width; i++) 
    {
        emptyNum = 0;                   
        for (int j = 0; j < height; j++)
        {
            if (Board[i][j] == emptyBoard) 
            {
                emptyNum++; 
            }
        }
        if (emptyNum == 0) 
        {
            score++;               
            for (int k = i; k >= 1; k--)
            {
                for (int t = 0; t < height; t++) 
                {
                    Board[k][t] = Board[k - 1][t]; 
                }
            }
        }
    }
    return score;
}
void EmptyCheck()
{
    if (type == 1)
    {
        if (Board[legoWidth2 + 1][legoHeight] != emptyBoard || Board[legoWidth2 + 1][legoHeight2] != emptyBoard)
        {
            NewLego();
            _sleep(1000);
        }
    }
    if (type == 2)
    {
        if (pos == 1)
        {
            if (Board[legoWidth2 + 1][legoHeight] != emptyBoard || Board[legoWidth2 + 1][legoHeight2] != emptyBoard || Board[legoWidth2 + 1][legoHeight3] != emptyBoard)
            {
                NewLego();
                _sleep(1000);
            }
        }
        if (pos == 2)
        {
            if (Board[legoWidth2 + 1][legoHeight] != emptyBoard || Board[legoWidth3 + 1][legoHeight2] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
        if (pos == 3)
        {
            if (Board[legoWidth3][legoHeight3] != emptyBoard || Board[legoWidth3][legoHeight] != emptyBoard || Board[legoWidth4][legoHeight2] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
        if (pos == 4)
        {
            if (Board[legoWidth3 + 1][legoHeight2] != emptyBoard || Board[legoWidth2 + 1][legoHeight3] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
    }
    if (type == 3)
    {
        if (pos == 1)
        {
            if (Board[legoWidth3 + 1][legoHeight] != emptyBoard || Board[legoWidth3 + 1][legoHeight2] != emptyBoard)
            {
                NewLego();
                _sleep(1000);
            }
        }
        if (pos == 2)
        {
            if (Board[legoWidth3][legoHeight - 1] != emptyBoard || Board[legoWidth3][legoHeight] != emptyBoard || Board[legoWidth3][legoHeight2] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
        if (pos == 3)
        {
            if (Board[legoWidth + 1][legoHeight] != emptyBoard || Board[legoWidth3 + 1][legoHeight2] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
        if (pos == 4)
        {
            if (Board[legoWidth3 + 1][legoHeight] != emptyBoard || Board[legoWidth2 + 1][legoHeight2] != emptyBoard || Board[legoWidth2 + 1][legoHeight3] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
    }
    if (type == 4)
    {
        if (pos == 1)
        {
            if (Board[legoWidth4 + 1][legoHeight] != emptyBoard)
            {
                NewLego();
                _sleep(1000);
            }
        }
        if (pos == 2)
        {
            if (Board[legoWidth2 + 1][legoHeight] != emptyBoard || Board[legoWidth2 + 1][legoHeight2] != emptyBoard || Board[legoWidth2 + 1][legoHeight3] != emptyBoard || Board[legoWidth2 + 1][legoHeight4] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
    }
    if (type == 5)
    {
        if (pos == 1)
        {
            if (Board[legoWidth2 + 1][legoHeight] != emptyBoard || Board[legoWidth + 1][legoHeight3] != emptyBoard || Board[legoWidth2 + 1][legoHeight2] != emptyBoard)
            {
                NewLego();
                _sleep(1000);
            }
        }
        if (pos == 2)
        {
            if (Board[legoWidth2 + 1][legoHeight] != emptyBoard || Board[legoWidth3 + 1][legoHeight2] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
    }
    if (type == 6)
    {
        if (pos == 1)
        {
            if (Board[legoWidth2 + 1][legoHeight2] != emptyBoard || Board[legoWidth + 1][legoHeight] != emptyBoard || Board[legoWidth2 + 1][legoHeight3] != emptyBoard)
            {
                NewLego();
                _sleep(1000);
            }
        }
        if (pos == 2)
        {
            if (Board[legoWidth2 + 1][legoHeight2] != emptyBoard || Board[legoWidth3 + 1][legoHeight] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
    }
    if (type == 7)
    {
        if (pos == 1)
        {
            if (Board[legoWidth3 + 1][legoHeight] != emptyBoard || Board[legoWidth3 + 1][legoHeight2] != emptyBoard)
            {
                NewLego();
                _sleep(1000);
            }
        }
        if (pos == 2)
        {
            if (Board[legoWidth2 + 1][legoHeight] != emptyBoard || Board[legoWidth2 + 1][legoHeight2] != emptyBoard || Board[legoWidth3 + 1][legoHeight3] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
        if (pos == 3)
        {
            if (Board[legoWidth + 1][legoHeight2] != emptyBoard || Board[legoWidth3 + 1][legoHeight] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
        if (pos == 4)
        {
            if (Board[legoWidth3 + 1][legoHeight] != emptyBoard || Board[legoWidth3 + 1][legoHeight] != emptyBoard || Board[legoWidth3 + 1][legoHeight] != emptyBoard)
            {
                NewLego();
                _sleep(500);
            }
        }
    }
}

void LooseCheck()
{
    bool loose = false;
    emptyNum = 0;
    for (int j = 1; j < height; j++)
    {
        if (Board[0][j] != '_')
        {
            loose = true;
        }
    }
    if (loose == true)
    {
        system("cls");
        cout << "YOU LOOSE!";
        cout << endl
             << "IF YOU WANT TO RELOAD ENTER NUMBER 1" << endl;
        int enternum;
        cin >> enternum;
        while (enternum != 1)
        {
            cin >> enternum;
        }
        system("cls");
        initializeBoard();
        NewLego();
        while (legoWidth2 <= width)
        {
            system("cls");
            cout << "your point :" << point << endl;
            LegoDown();
            if (kbhit())
            {
                Move();
            }
            displayBoard();
            Board[0][0] = '_';
            _sleep(1000);
            int score = checkScore(Board); 
            point += score;                
            LooseCheck();
            EmptyCheck();
        }
    }
}

void Type1()
{
    type = 1;
    legoWidth = 0;
    legoWidth2 = 1;
    legoHeight = getRandom();
    if (legoHeight < 0)
    {
        legoHeight = -1 * legoHeight;
    }

    legoHeight2 = legoHeight + 1;
    Board[0][legoHeight] = sheklak;
    Board[0][legoHeight2] = sheklak;
    if (Board[1][legoHeight] != emptyBoard || Board[1][legoHeight2] != emptyBoard)
    {
        LooseCheck();
    }
    Board[1][legoHeight] = sheklak;
    Board[1][legoHeight2] = sheklak;
}
void Type2()
{
    pos = 1;
    firsttime = true;
    exist = false;
    type = 2;
    legoHeight = getRandom();
    if (legoHeight < 0)
    {
        legoHeight = -1 * legoHeight;
    }
    if (legoHeight > 6)
    {
        legoHeight = legoHeight - 3;
    }
    legoHeight2 = legoHeight + 1;
    legoHeight3 = legoHeight2 + 1;
    legoWidth = 0;
    legoWidth2 = 1;
    legoWidth3 = 2;
    if (Board[legoWidth2][legoHeight] != emptyBoard || Board[legoWidth2][legoHeight2] != emptyBoard || Board[legoWidth2][legoHeight3] != emptyBoard)
    {
        LooseCheck();
    }
    Board[legoWidth][legoHeight] = emptyBoard;
    Board[legoWidth][legoHeight2] = sheklak;
    Board[legoWidth][legoHeight3] = emptyBoard;
    Board[legoWidth2][legoHeight] = sheklak;
    Board[legoWidth2][legoHeight2] = sheklak;
    Board[legoWidth2][legoHeight3] = sheklak;
}
void Type3()
{
    firsttime = true;
    exist = false;
    type = 3;
    legoHeight = getRandom();
    if (legoHeight < 0)
    {
        legoHeight = -1 * legoHeight;
    }
    if (legoHeight > 7)
    {
        legoHeight = legoHeight - 2;
    }
    legoHeight2 = legoHeight + 1;
    legoHeight3 = legoHeight2 + 1;
    legoWidth = 0;
    legoWidth2 = 1;
    legoWidth3 = 2;
    if (Board[legoWidth2][legoHeight] != emptyBoard || Board[legoWidth2][legoHeight2] != emptyBoard)
    {
        LooseCheck();
    }
    Board[legoWidth][legoHeight] = sheklak;
    Board[legoWidth2][legoHeight] = sheklak;
    Board[legoWidth3][legoHeight] = sheklak;
    Board[legoWidth3][legoHeight2] = sheklak;
}
void Type4()
{
    firsttime = true;
    exist = false;
    type = 4;
    legoHeight = getRandom();
    if (legoHeight < 0)
    {
        legoHeight = -1 * legoHeight;
    }
    if (legoHeight > 9)
    {
        legoHeight = legoHeight - 2;
    }
    legoHeight2 = legoHeight + 1;
    legoHeight3 = legoHeight2 + 1;
    legoHeight4 = legoHeight3 + 1;
    legoWidth = 0;
    legoWidth2 = 1;
    legoWidth3 = 2;
    legoWidth4 = 3;
    if (Board[legoWidth2][legoHeight] != emptyBoard)
    {
        LooseCheck();
    }
    Board[legoWidth][legoHeight] = sheklak;
    Board[legoWidth2][legoHeight] = sheklak;
    Board[legoWidth3][legoHeight] = sheklak;
    Board[legoWidth4][legoHeight] = sheklak;
}
void Type5()
{
    firsttime = true;
    exist = false;
    type = 5;
    legoHeight = getRandom();
    if (legoHeight < 0)
    {
        legoHeight = -1 * legoHeight;
    }
    if (legoHeight > 9)
    {
        legoHeight = legoHeight - 2;
    }
    legoHeight2 = legoHeight + 1;
    legoHeight3 = legoHeight2 + 1;
    legoWidth = 0;
    legoWidth2 = 1;
    legoWidth3 = 2;
    if (Board[legoWidth2][legoHeight] != emptyBoard ||
        Board[legoWidth2][legoHeight2] != emptyBoard)
    {
        LooseCheck();
    }
    Board[legoWidth][legoHeight2] = sheklak;
    Board[legoWidth][legoHeight3] = sheklak;
    Board[legoWidth2][legoHeight] = sheklak;
    Board[legoWidth2][legoHeight2] = sheklak;
}
void Type6()
{
    firsttime = true;
    exist = false;
    type = 6;
    legoHeight = getRandom();
    if (legoHeight < 0)
    {
        legoHeight = -1 * legoHeight;
    }
    if (legoHeight > 9)
    {
        legoHeight = legoHeight - 2;
    }
    legoHeight2 = legoHeight + 1;
    legoHeight3 = legoHeight2 + 1;
    legoWidth = 0;
    legoWidth2 = 1;
    legoWidth3 = 2;
    if (Board[legoWidth2][legoHeight2] != emptyBoard ||
        Board[legoWidth2][legoHeight3] != emptyBoard)
    {
        LooseCheck();
    }
    Board[legoWidth][legoHeight] = sheklak;
    Board[legoWidth][legoHeight2] = sheklak;
    Board[legoWidth2][legoHeight2] = sheklak;
    Board[legoWidth2][legoHeight3] = sheklak;
}
void Type7()
{
    firsttime = true;
    exist = false;
    type = 7;
    legoHeight = getRandom();
    if (legoHeight < 0)
    {
        legoHeight = -1 * legoHeight;
    }
    if (legoHeight > 7)
    {
        legoHeight = legoHeight - 2;
    }
    legoHeight2 = legoHeight + 1;
    legoHeight3 = legoHeight2 + 1;
    legoWidth = 0;
    legoWidth2 = 1;
    legoWidth3 = 2;
    if (Board[legoWidth][legoHeight2] != emptyBoard || Board[legoWidth2][legoHeight2] != emptyBoard ||
        Board[legoWidth3][legoHeight] != emptyBoard ||
        Board[legoWidth3][legoHeight2] != emptyBoard)
    {
        LooseCheck();
    }
    Board[legoWidth][legoHeight2] = sheklak;
    Board[legoWidth2][legoHeight2] = sheklak;
    Board[legoWidth3][legoHeight] = sheklak;
    Board[legoWidth3][legoHeight2] = sheklak;
}
void NewLego()
{
    pos = 1;
    int tedadLego = 7;
    int random = rand();
    if (random % tedadLego == 0)
    {
        sheklak = char(219);
        Type1();
    }
    if (random % tedadLego == 1)
    {
        sheklak = char(219);
        Type2();
    }
    if (random % tedadLego == 2)
    {
        sheklak = char(219);
        Type3();
    }
    if (random % tedadLego == 3)
    {
        sheklak = char(219);
        Type4();
    }
    if (random % tedadLego == 4)
    {
        sheklak = char(219);
        Type5();
    }
    if (random % tedadLego == 5)
    {
        sheklak = char(219);
        Type6();
    }
    if (random % tedadLego == 6)
    {
        sheklak = char(219);
        Type7();
    }
}
int main()
{

    initializeBoard();
    NewLego();
    while (legoWidth2 <= width)
    {
        system("cls");
        cout << "your point :" << point << endl;
        LegoDown();
        if (kbhit())
        {
            Move();
        }
        displayBoard();
        Board[0][0] = '_';
        _sleep(1500);
        int score = checkScore(Board); 
        point += score;               
        LooseCheck();
        EmptyCheck();
    }
}
