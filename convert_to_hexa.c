#include "main.h"

long unsigned convert_to_hexa(long unsigned int num, int det, int *count)
{
    long unsigned int rem;

    if (num == 0)
    {
        return 1;
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
        return 0;
    }
}
int countWrapper(long unsigned int num, int det)
{
    int count = 0;
    convert_to_hexa(num, det, &count);
    return (count);
}