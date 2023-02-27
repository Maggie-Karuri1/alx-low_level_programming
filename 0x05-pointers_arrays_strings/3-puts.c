#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a line..
 *
 *@str: the string to print.
 * Return: void
 */

void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		putchar(str[num]);
	}
	putchar('\n');
}
