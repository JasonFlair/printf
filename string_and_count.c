#include "main.h"

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