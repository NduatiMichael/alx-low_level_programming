#include "main.h"
/**
 *_isupper - checks for uppercase character
 *
 * @c: Character to be checked
 * Return: 0 if false and 1 if true
 */

int _isupper(int c)
{
	char Alphabet = 'A';

	for (Alphabet = 'A'; Alphabet <= 'Z'; Alphabet++)
		if (c == Alphabet)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	return (0);
}
