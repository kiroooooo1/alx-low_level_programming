#include <stdio.h>
/**
 * main - to print
 *
 * Return: always (0)
 *
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
	printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(float));
	return (0);
}
