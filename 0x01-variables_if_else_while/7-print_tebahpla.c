#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *Followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
        char c;

        for (c = 'z'; c >= 'a'; c--)
        {
                puchar(c);
        }
        putchar('\n');
        return (0);
}
