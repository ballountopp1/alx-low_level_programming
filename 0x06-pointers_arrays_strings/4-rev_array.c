#include "main.h"

/**
 * reverse_array - function that reverses the array of integers.
 * reverse_array - reverse an array
 * @a: Pointer to array
 * @n: Pointer of elements of an array
 * @a: an array of integers
 * @n: number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;

	counter = 0;

	while (counter <= n)
	{
		temp a[counter];

		temp = a[counter];
		a[counter++] = a[n];

		a[n--] = temp;
	}
}
