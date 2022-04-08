#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number and states whether it is positive , negative or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%i is zero\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else

printf ("%i is positive\n", n);

return (0);
}
