#include <stdio.h>

/**
 *
 *  * main - main block
 *
 *   * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 *
 *    * Return: 0
 */
int main(void)
{
		char c = 'a';
			if (c <= 'z')
			{
				putchar(c);
				c++;

			}
			c = 'A';
				else if (c <= 'Z')
				{
					putchar(c);
					c++;
				}
				 putchar('\n');
	return (0);
}
