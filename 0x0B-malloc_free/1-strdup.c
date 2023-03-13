#include <stdlib.h>
#include "main.h"

/**
 * _strlen - l of string
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}

/**
	* _strdup - creates an array of char.
	* @str: string to copy
	* Return: a pointer to the array or NULL
*/

char *_strdup(char *str)
{

	char *arr;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);
	arr = (char *)malloc(sizeof(char) * len);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{

		arr[i] = str[i];
	}

	return (arr);
}
