#include "main.h"
#include <math.h>
/**
 * convert_to_octa - converts an integer to octal
 * @n: integer to convert
 * Return: octal count
 */
long convert_to_octa(int n)
{
	long oct = 0;
	int rem;
	int i = 1;
	
	while (n != 0)
	{
		rem = n % 8;
		n /= 8;
		oct += rem * i;
		i *= 10;
	}
	print_num(oct);
	return (counter(oct));
}
