#include "main.h"

/**
* main - check the code
*
* print_alphabet - prints alphabet
*
* Return: Always 0 success
*/
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c = 'a';
	while (c < 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
