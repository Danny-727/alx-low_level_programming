#include <stdio.h>
#include <stdlib.h>
#include <stding.h>

/**
 * main - prints the alphabet without q and e.
 *
 * Returnn: Alaways (Success)
 */
int main(void)
{
        int i;

        for(i = 97; i < 123; i++)
        {
                if (i != 101 && i !=123)
                {
                        putchar(i);
                }
        }
        putchar('\n');
        return (0);
}
