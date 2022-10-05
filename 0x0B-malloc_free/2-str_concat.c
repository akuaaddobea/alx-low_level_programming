#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1 - first string
 * @s2 - second string
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	s = str_concat("s1", "s2");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s)
	return(0);
}
		
