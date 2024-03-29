#include "variadic_functions.h"

/**
 * print_strings - print numbers using a separator
 * @separator: The string separator
 * @n: The quantity of numbers
 * @...: The list of numbers
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *str;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (a < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
