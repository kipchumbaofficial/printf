#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int main(void)
{
	int j = 0;

	j = _printf("%b\n", INT_MAX);
	_printf("%d\n", j);
	return (0);
}
