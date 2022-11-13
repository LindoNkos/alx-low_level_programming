#include <stdio.h>
#include "main.h"
/**
 * main - print name of the program
 * @argc: Number of arguments
 * @argv: arrays of argments
 * Return: Always 0 (sucess)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);

}


