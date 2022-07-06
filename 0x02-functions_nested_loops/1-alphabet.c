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
		int_ putchar(alphabet);
        putchar('\n');
        return ;
}
#endif

