#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @to: string to change pointer to
 * @s:
 * pointer to change
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
