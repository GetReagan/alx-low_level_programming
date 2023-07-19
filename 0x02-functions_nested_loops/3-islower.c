#include "main.h"

/**
 * _islower -This function checks for lowercase alphabets.
 * @r: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _islower(int r)
{
	if (r >= 'a' && r <= 'z')
		return (1);
	else
		return (0);
}
