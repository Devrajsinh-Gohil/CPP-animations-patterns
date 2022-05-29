#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
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
                if (j % 2 == 0)
                {
                    system("cls");
                    for (int k = 1; k <= 6; k++)
                    {
                        gotoxy(k, j);
                        printf(" ");
                    }
                    gotoxy(j, 1);
                    printf("* * * * * * ");
                    gotoxy(j, 2);
                    printf("*         * ");
                    gotoxy(j, 3);
                    printf("*         * ");
                    gotoxy(j, 4);
                    printf("*         *");
                    gotoxy(j, 5);
                    printf("*         * ");
                    gotoxy(j, 6);
                    printf("* * * * * * ");
                    Sleep(250);
                }

                else
                {
                    system("cls");
                    for (int k = 1; k <= 6; k++)
                    {
                        gotoxy(k, j);
                        printf(" ");
                    }
                    gotoxy(j, 1);
                    printf("    ***      ");
                    gotoxy(j, 2);
                    printf("  *     *    ");
                    gotoxy(j, 3);
                    printf("*         * ");
                    gotoxy(j, 4);
                    printf("*         * ");
                    gotoxy(j, 5);
                    printf("  *     *    ");
                    gotoxy(j, 6);
                    printf("    ***      ");
                    Sleep(250);
                }
            }
        }
        for (int i = 130; i > 0; i--)
        {
            for (int j = 0; j < 130; j++)
            {
                if (j % 2 == 0)
                {
                    system("cls");
                    for (int k = 1; k <= 6; k++)
                    {
                        gotoxy(k, j);
                        printf(" ");
                    }
                    gotoxy(j, 1);
                    printf("* * * * * * ");
                    gotoxy(j, 2);
                    printf("*         * ");
                    gotoxy(j, 3);
                    printf("*         * ");
                    gotoxy(j, 4);
                    printf("*         *");
                    gotoxy(j, 5);
                    printf("*         * ");
                    gotoxy(j, 6);
                    printf("* * * * * * ");
                    Sleep(250);
                }

                else
                {
                    system("cls");
                    for (int k = 1; k <= 6; k++)
                    {
                        gotoxy(k, j);
                        printf(" ");
                    }
                    gotoxy(j, 1);
                    printf("    ***      ");
                    gotoxy(j, 2);
                    printf("  *     *    ");
                    gotoxy(j, 3);
                    printf("*         * ");
                    gotoxy(j, 4);
                    printf("*         * ");
                    gotoxy(j, 5);
                    printf("  *     *    ");
                    gotoxy(j, 6);
                    printf("    ***      ");
                    Sleep(250);
                }
            }
        }
    }
}