#include "main.h"
/**
 * _islower - will return 1 if letter is a lowercase & 0 if not.
 *character from 97 to 122 represent a-z
 *Return: return 1 if lowerecase else 0
*/
{
int _islower(int c)
	{
		if (c >= 97 && c <= 122)
		{
		return (1);
		}
		else
		{
		return (0);
		}
	}
}
