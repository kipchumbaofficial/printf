#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s = "john";
	int i = 0, y = 0;

	i = printf("%s", s);
	y = _printf("%s", s);
	printf("%d%d", i, y);
	return(0);
}
