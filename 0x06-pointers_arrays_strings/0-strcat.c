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
while (dest[i] != '\0')
i++;
int j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
