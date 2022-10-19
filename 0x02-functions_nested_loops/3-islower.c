#include"main.h"
/**
 * _islower-check if character is lowercase.
 * @c: character to check if it islowercase.
 *Returns 1 if _islower
 *Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
