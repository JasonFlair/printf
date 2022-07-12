#include "main.h"
/**
 * print_num - prints a number
 * @n: num to print
 * Return: returns the num
 */
long print_num(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10)
	{
		print_num(n / 10);
	}
	_putchar(n % 10 + '0');
	return (n);
}
