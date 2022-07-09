#include "main.h"

/**
 * print_numbers - prints from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char i;

			i = '0';
	while (i <= '9')	
		_putchar(i++);
	_putchar('\n');
}
