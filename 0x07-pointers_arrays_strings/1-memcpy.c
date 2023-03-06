#include "main.h"
#include <string.h>

/**
 * _memcpy - writes function copies memory area.
 * The  memcpy()  function  copies  n bytes from memory area src
 *to memory area dest.
 *
 * @dest: This is the output string
 * @src: This is the input string
 * @n: The size of the memory to copy
 *
 * Return: the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	char *pDst = dest;
	char const *PSrc = src;

	for (count = 0; count < n; count++)
	{
		*pDst++ = *PSrc++;
	}
	return (dest);
}
