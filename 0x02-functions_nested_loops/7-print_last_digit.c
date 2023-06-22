#include "main.h"
/**
* print_last_digit -  value of an integer.
* @n: The integer to compute the absolute value of.
*
* Return: The absolute value of n.
*/
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
putchar(last_digit + '0');
return (last_digit);
}
