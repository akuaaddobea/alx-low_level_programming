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
	char *concat_str;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s2[j] != '\0'; j++)
		;

	concat_str = malloc(sizeof(char) * (i + j +1));

	if (concat_str == NULL)
	{
		free(concat_str);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		concat_str[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		concat_str[k] = s2[j];

	return (concat_str);
}
