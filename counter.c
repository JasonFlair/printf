#include "main.h"
/**
 * counter - counts integers
 * @n: integer to count
 * Return: counter
 */
int counter(int n)
{
	int counter = 0;

	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}
