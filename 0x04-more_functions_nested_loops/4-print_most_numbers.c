#include "main.h"
/**
 * print_most_numbers - prints from 0-9 and skipping 2 and 4
 * _puchar - prints out characters
 * Return: void
 */
void print_most_numbers(void)
{
	int _putchar(char);
	int i;

	for (i = 1; i <= 9; i++)
		if (i != 2 || i != 4)
			_putchar(i + '0');
}
