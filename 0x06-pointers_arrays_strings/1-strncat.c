#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 * @dest: first character
 * @src: second character
 * @n: int
 * Return: largest number
 */
char *_strcat(char *dest, char *src, int n)
{
	int j = 0;
	int i;

	for (i = 0; i < 1000; i++)

	{
		if (dest[i] == '\0')

		{
			break;
		}
		j++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)

	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
