#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if the input is an uppercase letter
 * @c: input character
 * Return: 1 if is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
