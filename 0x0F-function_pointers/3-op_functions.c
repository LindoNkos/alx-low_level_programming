#include "3-calc.h"

/**
 * op_add - sum of two integers
 * @a: first integer
 * @b:second ineger
 * return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction of the two integers
 * @a: the first integer
 * @b: second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);

}

/**
 * op_mul - calculates the product of two integer (multiplication)
 * @a: first integer
 * @b: second integer
 * Return: the product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);

}

/**
 * op_div - division of the two numbers
 * @a: fist integer
 * @b: second integer
 * Return: results of the division of the integers
 */
int op_div(int a, int b)
{
	return (a / b);

}

/**
 * op_mod - the remainder after dividing the two integers
 * @a: first integer
 * @b: second integer
 * Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);

}
