#include "main.h"
/**
* print_numbers - this function prints the digit from 0 to 9
* Description: this function prints the numbers from 0 to 9
* Return: a void function, no return
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
