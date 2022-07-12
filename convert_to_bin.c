#include "main.h"
#include <math.h>

long convert_to_bin(int n)
{
  long bin = 0;
  int rem;
  int i = 1;
  while (n != 0)
  {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
  print_num(bin);
  return (counter(bin));
}