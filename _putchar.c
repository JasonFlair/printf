#include "main.h"
/**
 * _putchar - writes character to stdout
 * @s: character to print
 * Return: 1 on success
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
