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
	m = printf("[%s]", s);
	n = _printf("[%s]", s);
	printf("%d\n%d\n", m, n);
	return (0);
}
