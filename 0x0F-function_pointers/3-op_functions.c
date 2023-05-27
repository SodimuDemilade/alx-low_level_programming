#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two numbers.
 **
 * op_sub - subtracts two numbers.
 *
 * op_mul - multiplies two numbers.
 *
 * op_div - divides two numbers.
 *
 * op_mod - performs modulus.
 *
 * @a: first number.
 *
 * @b: second number.
 *
 * Return: check the code.
 *
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
