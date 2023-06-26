#include "main.h"
#include <stdio.h>

int main(void)
{
	char c = 'a';
	char *str = "mike";

	_printf("%c", c);
	_printf("%s", str);
	_printf("%%");
	return (0);
}
