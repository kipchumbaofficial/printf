#include "main.h"
#include <stdio.h>
#include <stddef.h>

int main(void)
{
	char c = 'a';
	char *str = NULL;

	_printf("%c", c);
	_printf("%s", str);
	_printf("%%");
	return (0);
}
