#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int i , j;
    do
    {
        height = get_int("Insert a positive number of height: ");
    }
   while (height < 1 || height > 8);

  for (int line = 0; line < height; line++)
    {
        // Print the spaces
        for (int space = height - 1; space > line; space--)
        {
            printf(" ");
        }

        // Print the left blocks
        for (int left_blocks = 0; left_blocks <= line; left_blocks++)
        {
            printf("#");
        }

        // Print the two spaces between the blocks
        printf("  ");

        // Print the right blocks
        for (int right_blocks = 0; right_blocks <= line; right_blocks++)
        {
            printf("#");
        }

        // Go to the next line
        printf("\n");
    }
}

