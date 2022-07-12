#include "main.h"
/**
 * string - takes a string
 * @s: pointer to string
 * Return: count
 */
int string(char *s)
{
	char *ptr;
	int count;
	
	ptr = s;
	count = 0;
	while (*ptr)
	{
		_putchar(*ptr);
		count++;
		ptr++;
	}
	
	return (count);
}
