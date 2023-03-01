#include "main.h"
/**
 **_strcat - concatenates sring src to string dest
 * @src: source string
 * @dest: destiation
 * Return:pointer to the resulting string
 */
char *_strncat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
