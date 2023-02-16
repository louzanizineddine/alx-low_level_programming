#include<unistd.h>
#include<sys/syscall.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
syscall(SYS_write, 1, m, sizeof(m));
return (0);
}
