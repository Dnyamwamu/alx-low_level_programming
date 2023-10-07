#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This function writes the message "and that piece of art
 * is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the
 * standard error using the write system call and returns 1.
 *
 * Return: Always 1
 */
int main(void)
{
	const char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, m, 59);
	return (1);
}
