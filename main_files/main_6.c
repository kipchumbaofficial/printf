#include <stdio.h>
#include "main.h"
/**
 * main - checks code
 *
 * Return: 0
 */
int main(void)
{
	int n = 0, m = 0;
	char *s = "abdcd";
	m = printf("John:[%s]", s);
	n = _printf("John:[%s]", s);
	printf("%d\n%d\n", m, n);
	return (0);
}
