#include "main.h"
/**
 * convert_to_hexa - function that converts a number to hexadecimal
 * @num: number to be converted
 * @det: determines if result should be in lowercase or uppercase
 * @count: pointer to count
 *
 * Return: 0 success
 */

unsigned long convert_to_hexa(unsigned long int num, int det, int *count)
{
	unsigned long int rem;

	if (num == 0)
	{
		return (1);
	}
	else
	{
		rem = num % 16;
		(*count)++;
		convert_to_hexa(num / 16, det, count);
		if (rem >= 10 && det == 1)
		{
			_putchar(rem + 55);
		}
		else if (rem >= 10 && det == 0)
		{
			_putchar(rem + 87);
		}
		else
		{
			print_num(rem);
		}

		return (0);
	}
}

/**
 * countWrapper - wraps the number to be counted
 * @num: integer to be wrapped
 * @det: determines result case
 *
 * Return: the count
 */
int countWrapper(unsigned long int num, int det)
{
	int count = 0;

	convert_to_hexa(num, det, &count);

	return (count);
}
