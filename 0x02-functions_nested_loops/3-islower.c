#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: is the char to be changed
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
