#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @agrc: number of command line argument 
 * @agrv: array that contains the program command line arguments
 * Return: 0 - success
 */

int main (int agrc __attribute_((unused)), char *agrv[])

{
	printf("%s\n", agrv[0]);

		return (0);
}
