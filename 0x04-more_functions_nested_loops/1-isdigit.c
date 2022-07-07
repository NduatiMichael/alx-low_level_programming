#include "main.h"
/**
 * _isdigit- Checks whether the input is a digit
 *@c: the input to be checked
 *Return: 1 if is a digit and 0 if it is not
 */
int _isdigit(int c)
{
	int counter = 0;

	while (counter < 10)
	if (c == counter)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
