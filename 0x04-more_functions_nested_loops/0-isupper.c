#include "holberton.h"

/** @c: the character to be process.
* Return: return 1 if c is upper and 0 in other cases.
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
