#include "main.h"
#include <stdio.h>
#include <stddef.h>

int main(void)
{
	int f = 0, i = 0;

	f = _printf("%c",'a');
	i = printf("%c", 'a');
	printf("%d%d", i, f);
	return (0);
}
