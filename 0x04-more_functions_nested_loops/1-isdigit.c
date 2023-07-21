#include "main.h"
/**
* _isdigit - this function says if a character is a digit
* @c: the character to be process
* Description: this function says if a character is a digit)?
* Return: return 1 if c is a digit and 0 in other cases.
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
