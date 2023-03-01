#include "main.h"
/**
 **_strncat - concatenates sring src to string dest
 * @src: source string
 * @dest: destiation
 * @n: number of bytes from source to use
 * Return:pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
