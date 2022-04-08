#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d %s\n", n, n % 10,
((n % 10) == 0) ? "and is 0"
: (((n % 10) == 0) ? "and is greater than 5"
: "and is less than 6 and not 0"));

return (0);
}
