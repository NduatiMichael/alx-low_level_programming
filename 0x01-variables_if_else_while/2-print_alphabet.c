#include <stdio.h>
/* more headers goes there */

/**
 * main - the entire alphabet
 * Return: the alphabet in small letters
 */
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
