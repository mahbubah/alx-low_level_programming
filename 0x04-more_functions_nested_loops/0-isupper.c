#include "main.h"
#include <stdio.h>

/*
* _isupper - check if a character is uppercase letter
* Return : 1 if uppercase otherwise 0
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
