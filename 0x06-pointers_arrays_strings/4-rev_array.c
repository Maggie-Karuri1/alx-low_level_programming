#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int tmp, q = 0;
	int end = n - 1; /* omit null terminator in length */

	while (q < end)
	{
		tmp = *(a + q);
		*(a + q) = *(a + end);
		*(a + end) = tmp;
		q++, end--;
	}
}
