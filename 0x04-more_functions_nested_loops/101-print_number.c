#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	int x;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	while (x >= 10)
	{
		_putchar((x / 10) + 48);
		_putchar((x % 10) + 48);
	}
	_putchar(x + 48);
}
