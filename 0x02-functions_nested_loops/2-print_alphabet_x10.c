#include "main.h"
/**
 * print_alpahabet_x10 - Prints the alphabet 10 times.
 * description: this contains code thet prints alphabets a to z 10x.
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	// description for file
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
