#include "main.h"
/**
* print_diagonal - this function print diagonals
* @n: larger of the digonals
* Description: this function prints diagonals
* Return: a void function, no return
*/
void print_diagonal(int n)
{
	int i, j, spaces;

	spaces = 0;


	n <= 0 ? _putchar('\n') : n;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			for (j = 0; j < spaces; j++)
			{
				_putchar(' ');
			}
		}
		spaces++;
		if (n > 0)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
