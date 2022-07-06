#include "main.h"
#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * print_alphabet - prints the aphabet in lower case
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
#endif

