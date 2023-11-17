#include <string.h>
#include "shell.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if the strings are equal, negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(const char *s1, const char *s2)
{
	if (!s1 && s2)
	{
		return (-1);
	}
	else if (!s2 && s1)
	{
		return (1);
	}
	while (*s1)
	{
	if (*s1 != *s2)
	{
	break;
	}
	s1++, s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
