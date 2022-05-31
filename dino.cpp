#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <unistd.h>
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock())
        ;
}
using namespace std;
int main()
{
    // int n;
    // scanf("%d", &n);
    // char[162] ch ;
    int c = 0;
    int t = 15;
    int temp = 0;
    while (t--)
    {
        for (int i = 0; i < 130; i++)
        {
            for (int j = 0; j < 130; j++)
            {
                // int cnt = 0;
                gotoxy(70, 6);
                printf("# |  ");
                gotoxy(70, 7);
                printf("#|#");
                gotoxy(70, 8);
                printf("  |  ");
                gotoxy(35, 6);
                printf("# |  ");
                gotoxy(35, 7);
                printf("#|#");
                gotoxy(35, 8);
                printf("  |  ");
                gotoxy(100, 6);
                printf("  #");
                gotoxy(100, 7);
                printf("#|#");
                gotoxy(100, 8);
                printf("  #  ");
                if (j % 2 == 0)
                {
                    if (getch() == 'w')
                    {
                        system("cls");

                        for (int k = 1; k <= 8; k++)
                        {
                            gotoxy(k, j);
                            printf(" ");
                        }
                        gotoxy(j, 1);
                        printf("         ");
                        gotoxy(j, 2);
                        printf("         ");
                        gotoxy(j, 3);
                        printf("         ");
                        gotoxy(j, 4);
                        printf("   =o=== \n");
                        gotoxy(j, 5);
                        printf("   ==www \n");
                        gotoxy(j, 6);
                        printf(", |||-   \n");
                        gotoxy(j, 7);
                        printf("||||     \n");
                        gotoxy(j, 8);
                        printf(" L \\    \n");
                        Sleep(100);
                    }
                    else
                    {
                        system("cls");
                        for (int k = 1; k <= 8; k++)
                        {
                            gotoxy(j, k);
                            printf(" ");
                        }
                        gotoxy(j + 8, 1);
                        printf("   =o=== \n");
                        gotoxy(j + 8, 2);
                        printf("   ==www \n");
                        gotoxy(j + 8, 3);
                        printf(", |||-   \n");
                        gotoxy(j + 8, 4);
                        printf("||||     \n");
                        gotoxy(j + 8, 5);
                        printf("  L \\    \n");
                        gotoxy(j + 8, 6);
                        printf("         ");
                        gotoxy(j + 8, 7);
                        printf("         ");
                        gotoxy(j + 8, 8);
                        printf("         ");
                        Sleep(100);
                    }
                }
                else
                {
                    system("cls");
                    for (int k = 1; k <= 8; k++)
                    {
                        gotoxy(k, j);
                        printf(" ");
                    }
                    gotoxy(j, 1);
                    printf("         ");
                    gotoxy(j, 2);
                    printf("         ");
                    gotoxy(j, 3);
                    printf("         ");
                    gotoxy(j, 4);
                    printf("   =o=== \n");
                    gotoxy(j, 5);
                    printf("   ==www \n");
                    gotoxy(j, 6);
                    printf(", |||-   \n");
                    gotoxy(j, 7);
                    printf("||||     \n");
                    gotoxy(j, 8);
                    printf(" / L    \n");
                    Sleep(100);
                }
            }
        }
    }
}