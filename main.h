#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char s);
int _printf(const char *format, ...);
long convert_to_bin(int n);
long convert_to_octa(int n);
long unsigned convert_to_hexa(long unsigned int num, int det, int *count);
int countWrapper(long unsigned int num, int det);
int counter(int n);
long print_num(long n);
int string(char *s);
