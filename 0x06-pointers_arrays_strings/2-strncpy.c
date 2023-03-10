#include "main.h"

/**
 * _strncpy - function appends the src string to the dest string
 * @dest: first character
 * @src: second character
 * @n: int
 * Return: largest number
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
