#include "shell.h"

/**
 * _strlen - return length string
 * @str: the string
 * Return: length string
 */

int _strlen(const char *str)
{
	int length;

	if (!str)
		return (0);

	length = 0;
	while (*str)
	{
		str += 1;
		length += 1;
	}

	return (length);

}
