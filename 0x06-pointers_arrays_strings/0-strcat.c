#include "main.h"
/**
 **_strcat - concatenates sring src to string dest
 * @src: source string
 * @dest: destiation
 * Return:pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
