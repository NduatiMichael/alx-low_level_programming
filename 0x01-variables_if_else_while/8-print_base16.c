#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int num = 0;
	char alpha = 'a';

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
