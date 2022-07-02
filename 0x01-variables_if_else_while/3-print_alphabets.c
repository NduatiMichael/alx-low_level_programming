#include <stdio.h>
/**
 * main - the entire alphabet                                                    * Return: the alphabet in small letters                                         */                                                                            
int main(void)
{
	char i;
	char t;

       	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
       	for (t = 'A'; t <= 'Z'; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
