#include "shell.h"

/**
 * _write - write to file descriptor
 * @fd: file descriptor
 * @inp: input string
 * @len: length of input string
 *
 * Return: -100 when queue is full, 100 when successfully written.
 */
int _write(int fd, char *inp, int len)
{
	static char writeque[BUFFER_t];
	static int nque;

	if (fd < 0)
	{
	return (-100);
	}
	if (inp)
	{
	if (nque + len >= BUFFER_t)
	{
	if (write(fd, writeque, nque) == -1)
	{
	print_error(NULL, NULL, "problem writing");
	exit(-1);
	}
	nque = 0;
	}
	memcpy(writeque + nque, inp, len);
	nque += len;
	writeque[nque] = '\0';
	return (100);
	}
	if (nque > 0)
	{
	if (write(fd, writeque, nque) == -1)
	{
	print_error(NULL, NULL, "problem writing");
	exit(-1);
	}
	nque = 0;
	}
	return (0);
}

