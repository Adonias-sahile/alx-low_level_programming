#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
int c, i;

                for (c = 48; c <= 57; c++)
                {
                        for (i = 48; i <= 57; i++)
                        {
				putchar((c % 10) + '0');
				putchar((i % 10) + '0');
				
                                if (c == 8 && i == 9)
				continue;

                                        putchar(',');
                                        putchar(' ');
			}
		}
putchar('\n');

return (0);
}
