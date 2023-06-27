#include "main.h"
#include <stdio.h>
#include <stddef.h>

int main(void)
{
	int i = 0, j = 0;

	j = _printf("kirimi");
	i = printf("kirimi");
	_printf(NULL);
	_printf("%d%d", i, j);
	return (0);
}
