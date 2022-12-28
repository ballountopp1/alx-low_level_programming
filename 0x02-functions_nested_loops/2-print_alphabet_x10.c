#include "main.h"

/**
 * print_alphabet_x10 -prints 10 times the alphabet, in lowercase
 *
 * Return: nothing on success.
 */

void print_alphabet_x10(void)
{
	int start = 97, end = 122, count = 1;

	while (count <= 10)
	{
		while (star <= end)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');

		start = 97;
		count++;
	}
}
