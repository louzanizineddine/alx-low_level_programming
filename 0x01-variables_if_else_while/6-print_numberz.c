#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
