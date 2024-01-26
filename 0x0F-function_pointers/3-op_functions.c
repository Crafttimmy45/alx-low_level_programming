#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @j: first number
 * @k: second number
 * Return: add
 */
int op_add(int j, int k)
{
	return (j + k);
}

/**
 * op_sub - subctracts two numbers
 * @j: first number
 * @k: second number
 * Return: difference
 */
int op_sub(int j, int k)
{
	return (j - k);
}

/**
 * op_mul - multiplies two numbers
 * @j: first number
 * @k: second number
 * Return: multiplication
 */
int op_mul(int j, int k)
{
	return (j * k);
}

/**
 * op_div - divides two numbers
 * @j: first number
 * @k: second number
 * Return: division
 */
int op_div(int j, int k)
{
	if (k == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (j / k);
}

/**
 * op_mod - calculates the module of two numbers
 * @j: first number
 * @k: second number
 * Return: remainder of the division
 */
int op_mod(int j, int k)
{
	if (k == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (j % k);
}
