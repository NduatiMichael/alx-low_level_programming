#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
/**
 *_abs - Prints the absolute value of an input
 *
 *@n: the number to check
 * Return: absolute
 */
int _abs(int n)
{
	int absolute;

	if (n > 0)
	{
		absolute = n;
	}
	else if (n == 0)
	{
		absolute = 0;
	}
	else
	{
		absolute = n * -1;
	}
	return (absolute);
}
#endif
