#include "main.h"
#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * print_alphabet - prints the aphabet in lower case
 */
print_alphabet(void)
{
        char alphabet = 'a';

        for (alphabet = 'a'; alphabet = < 'z'; alphabet++)
                putchar(alphabet);
        putchar('/n');
        return (0);
}
#endif

