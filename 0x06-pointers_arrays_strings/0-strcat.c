#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 * @dest: first character
 * @src: second character
 * Return: largest number
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
