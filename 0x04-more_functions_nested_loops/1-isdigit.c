#include "main.h"
/**
 * _isdigit- Checks whether the input is a digit
 *@c: the input to be checked
 *Return: 1 if is a digit and 0 if it is not
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
