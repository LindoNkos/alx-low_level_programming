#include "main.h"
/**
 * _strlen-recursion - length of a string
 * @s: pointer block of memory to fill
 * REturn: strlen_recusion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}
