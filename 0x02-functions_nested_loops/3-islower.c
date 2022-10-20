#include"main.h"
/**
 *_islower-check if character is lowercase.
 *@c:character to check if it islowercase.
 *Returns:0-if lowercase,1-if not.
 * int _islower if c is greater than or equal to a return 1 ,else 0.
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
