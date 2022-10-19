#include "main.h"
/**
 *  main - check the code
 * description: a function that prints the alphabets,
 * in lowercase and followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
		}
	_putchar('\n');

}
