#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * Return: new string.
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, ci = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		arr[ci++] = s1[i];

	for (i = 0; s2[i]; i++)
		arr[ci++] = s2[i];

	return (arr);
}
