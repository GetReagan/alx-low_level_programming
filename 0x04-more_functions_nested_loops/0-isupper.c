#include "main.h"
/**
* * _isupper - this function says if a character is upper or not.
* @c: the character to be process.
* Description: this function says if a character is upper or not)?
* Return: return 1 if c is upper and 0 in other cases.
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
