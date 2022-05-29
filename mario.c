#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // initallizing variable height
    int height = 0;
    // prompting user to give input for height
    do
    {
        height = get_int("Height: ");
    }
    // rejecting inputs other then integers in range 1 to 8, both inclusive
    while (height < 1 || height > 8);

    // loop for managing number of rows according to the height provided
    for (int i = 0; i < height; i++)
    {
        // loop for managing columns according to the height
        for (int j = 0; j <= height + 2 + i; j++)
        {
            // condition to print space in pattern
            if (j < height - i - 1 || j == height || j == height + 1)
            {
                printf(" ");
            }
            // else condition to print #.
            else
            {
                printf("#");
            }
        }
        // moves cursor to next line after the formation of a row is completed
        printf("\n");
    }
}