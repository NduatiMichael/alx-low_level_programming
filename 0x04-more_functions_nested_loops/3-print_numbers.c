#include "main.h"
/**
 * print_numbers - function to print numbers
 * * Return: no return value
 */
void print_numbers(void)
{
	int counter = 0;

	while (counter <= 9)
	{
		_putchar(counter + '0');
		counter++;
	}
	_putchar('\n');
}
