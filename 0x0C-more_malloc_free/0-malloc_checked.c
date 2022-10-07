#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int parameter
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
