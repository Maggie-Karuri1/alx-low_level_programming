#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initializes them.
 * @size: size of the array.
 * @c: char to initialize the array.
 *
 * Return: Null if it fails
 * Pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
