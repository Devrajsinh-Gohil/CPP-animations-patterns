#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void main()
{
    // int n;
    // scanf("%d", &n);
    // char[162] ch ;
    int c = 0;
    int t = 15;
    int temp = 0;
    while (1)
    {
        for (int i = 0; i < 162; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                // Sleep(50);
                printf(" ");
            }
            printf("*");
            Sleep(30);
            system("cls");
        }
        for (int i = 162; i > 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
                // Sleep(50);
                printf(" ");
            }
            printf("*");
            Sleep(30);
            system("cls");
        }
        // printf("\n");
    }
}