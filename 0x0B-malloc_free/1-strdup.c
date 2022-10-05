#include "main.h"
#include <stdlib.h>

/**
 * _strdup- function returns a pointer to a new string which is a duplicate
 * of the string
 * space in a memory, which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: NULL in case of error, pointer to allocated space
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)

		strout[j] = str[j];
	return (strout);
}
