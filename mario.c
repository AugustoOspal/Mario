#include <cs50.h>
#include <stdio.h>

int height;

int main(void)
{
    while (height < 1 || height > 8)
    {
        // Asking the user the height
        height = get_int("Height: ");
    }

    // Rows of #
    for (int i = 1; i <= height; i++)
    {
        // Printing the empty spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Printing the # on the left
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Printing the gap
        printf("  ");

        // Printing the # on the right
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
