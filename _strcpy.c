#include <string.h>
#include "shell.h"

/**
 * _strcpy - copy the source string to the destination string
 * @dest: the destination string
 * @src: the source string
 * Return: the destination string
 */
char *_strcpy(char *dest, const char *src)
{
	if (!dest)
	{
	return (NULL);
	}
	char *temp = dest;

	while (*src)
	{
	*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
