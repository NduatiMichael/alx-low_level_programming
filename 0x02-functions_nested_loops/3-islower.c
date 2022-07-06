#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
/**
 *_islower - checks if character is lower case
 *
 *@c: the character to check
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
