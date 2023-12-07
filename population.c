#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    int end;
    int years = 0;
    do
    {
        start = get_int("Insert a starting number of Llamas: ");

    }
    while (start < 9);
    // TODO: Prompt for end size
        do
        {
            end = get_int("Insert an ending number of Llamas: ");
        }
        while(end < start);
    // TODO: Calculate number of years until we reach threshold
         for (years = 0; start < end; years++)
    {
        start = start + (start / 3) - (start / 4);
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
