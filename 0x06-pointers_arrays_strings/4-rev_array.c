#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;
	for(i = 0;i < n; i++)
	{
		h=a[i];
	}
	for(int j = n-1; j >= 0; j--)
	{
		a[j]=h;
	}

}
