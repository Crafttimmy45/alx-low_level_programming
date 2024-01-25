#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: person's name.
 * @f: pointer to a function.
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
