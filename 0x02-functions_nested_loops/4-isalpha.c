#include "main.h"
/**
 * _isalpha - This function checks for alphabetic order
 * @c: alpabet to check for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
