#include "main.h"
/**
 * main - Entry point
 * Description: prints '_putchar \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char string[] = "_putchar\n";
int i = 0;
while (string[i] != '\0')
	{
	char c = string[i];

	_putchar(c);
	i++;
	}
return (0);
}
