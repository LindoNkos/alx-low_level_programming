#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * return: 0 or _strlen_of_string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
