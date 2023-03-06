#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int i, j, boolian;

  for (i = 0; *(s + i) != '\0'; i++)
    {
      boolian = 1;
      for (j = 0; *(accept + j) != '\0'; j++)
	{
	  if (*(s + i) == *(accept + j))
	    {
	      boolian = 0;
	      break;
	    }
	}
      if (boolian == 1)
	break;
    }
  return (i);
}
