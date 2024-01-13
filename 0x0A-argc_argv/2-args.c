#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of argumentd
 * @argv: arry of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
