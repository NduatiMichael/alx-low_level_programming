#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int counter = 0;

	for (counter = 0; counter <= 9; counter++)
	{
		putchar(counter + '0');
		if (counter != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
