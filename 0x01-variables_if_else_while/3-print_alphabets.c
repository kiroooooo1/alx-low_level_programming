#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar (low);

	for (low = 'A'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
