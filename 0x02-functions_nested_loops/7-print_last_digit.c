#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
/**
 *print_last_digit - Prints the last digit in  a number
 *@n: The number to be processed
 *Return: Returns the value of the digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
#endif
