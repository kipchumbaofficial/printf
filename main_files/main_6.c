#include <stdio.h>
#include "main.h"
/**
 * main - checks code
 *
 * Return: 0
 */
int main(void)
{
	int  m = 0;
	char *s = "abdcd";
	m = printf("John:[%s]", s);
	_printf("John:[%s]", s);
	printf("%d\n%d\n", m, s);
	return (0);
}
