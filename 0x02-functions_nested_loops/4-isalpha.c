#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
/**
 *_isalpha - checks if character is an alphabet
 *
 *@c: the character to check
 * Return: 1 if lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if
		(c >= 'A' && c <= 'Z')
			return (1);
	else
		return (0);
}
#endif
