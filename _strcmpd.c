#include <string.h>
#include "shell.h"

/**
 * _strcmpd - checks if a substring is contained within another string
 * @fstring: the full string
 * @sub: the substring to search for
 *
 * Return: 1 if the substring is found, -1 otherwise
 */
int _strcmpd(const char *fstring, const char *sub)
{
	if (!fstring || !sub)
	{
	return (-1);
	}
	if (!*fstring)
	{
	return (-1);
	}
	if (strlen(fstring) < strlen(sub))
	{
	return (-1);
	}
	while (*sub)
	{
	if (*sub == *fstring)
	{
	return (1);
	}
	sub++;
	}
	return (-1);
}
