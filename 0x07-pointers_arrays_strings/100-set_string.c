#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * set_string - check the code.
 *
 * @s: check the parameters.
 *
 * @to: check the parameters.
 */

void set_string(char **s, char *to)
{
	*s = to;
	printf("%s", *s);
}
