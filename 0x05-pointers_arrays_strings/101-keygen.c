#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 *  main - entry point
 *  Return: generated password
 */

int main(void)
{
int num;

srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
