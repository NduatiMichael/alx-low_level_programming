#include "main.h"
#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * print_alphabet_x10 - prints the aphabet in lower case
 */
void print_alphabet_x10(void)
{
	int count = 0;

	for (count = 0; count <= 9; count++)
	{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	}
}
#endif

