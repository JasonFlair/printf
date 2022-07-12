#include "main.h"

int _printf(const char *format, ...)
{
    va_list ap;
    const char *ptr;
    int length, count;
    count = 0;
    
    *ptr = format;

    va_start(ap, *format);
    while (*ptr)
    {
        if (*ptr == '%')
        {
            ptr++;
            if (*ptr == 'c')
            {
                char a = va_arg(ap, int);
                length = _putchar(a);
                count += length;
            }
            else if (*ptr == 'd')
            {
                int b = va_arg(ap, int);
                length = counter(print_num(b));
                count += length;
            }
            else if (*ptr == 'i')
            {
                int b = va_arg(ap, int);
                length = counter(print_num(b));
                count += length;
            }
            else if (*ptr == 's')
            {
                char *s = va_arg(ap, char *);
                length = string(s);
                count += length;
            }
            else if (*ptr == 'x')
            {
                long unsigned int h = va_arg(ap, long unsigned int);
                length = countWrapper(h, 0);
                count += length;
            }
            else if (*ptr == 'X')
            {
                long unsigned int h = va_arg(ap, long unsigned int);
                length = countWrapper(h, 1);
                count += length;
            }
        }
        else
        {
            _putchar(*ptr);
            count++;
        }
        ptr++;
    }
    va_end(ap);
    return (count);
}
