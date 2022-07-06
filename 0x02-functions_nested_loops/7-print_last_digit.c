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
	int lastDigit;

	if (n < 0)
	{
	n = -n;
	}
	lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
#endif
