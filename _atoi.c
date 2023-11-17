#include "shell.h"

/**
 * _atoi - convert string to integer
 *
 * @s: the string to be converted
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	int started = 0;

	while (*s)
	{
	if (started && !(*s >= '0' && *s <= '9'))
	{
	break;
	}
	if (*s == '-')
	{
	sign *= -1;
	}
	if ((*s >= '0' && *s <= '9'))
	{
	started = 1;
	num = num * 10 + (int)*s - 48;
	}
	s++;
	}
	return (sign * num);
}
