#include "shell.h"

/**
 * _strtok - tokenizes a string
 * @str: the string to be tokenized
 * @delimiter: the token delimiter
 * @whichf: the strcmp function to use (0 for _strcmpd, 1 for _strcmps)
 *
 * Return: a pointer to the current delimited token
 */
char *_strtok(char *str, const char *delimiter, int whichf)
{
	static char *save;
	char *_new = NULL;
	int i = 0, (*func)(char *, const char *) = NULL, loc = 0, in_quotes = 0;

	func = (whichf == 0) ? _strcmpd : _strcmps;
	loc = (whichf) ? strlen(delimiter) - 1 : 0;
	if (!str || !*str || !delimiter || !*delimiter)
	return (NULL);
	if (!str || !*str)
	{
	if (!save || !*save)
	return (NULL);
	while (in_quotes || (func(save + i, delimiter) != 1 && *(save + i) != '\0'))
	{
	if (*(save + i) == '\'' || *(save + i) == '\"')
	in_quotes = !in_quotes;
	i++;
	}
	if (*(save + i) == '\0')
	{
	_new = save, save = NULL;
	return (_new);
	}
	_new = save;
	*(save + i) = '\0';
	save = save + i + loc + 1;
	return (_new);
	}
	while (in_quotes || (func(str + i, delimiter) != 1 && *(str + i) != '\0'))
	{
	if (*(str + i) == '\'' || *(str + i) == '\"')
	in_quotes = !in_quotes;
	i++;
	}
	if (*(str + i) == '\0')
	{
	save = NULL;
	return (str);
	}
	save = str + i + loc + 1;
	*(str + i) = '\0';
	return (str);
}
