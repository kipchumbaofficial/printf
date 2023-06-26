#include <stdio.h>
#include "main.h"
/**
 * main - checks code
 *
 * Return: 0
 */
int main(void)
{
	int i = 0, y = 0, n = 0, m = 0;
	char c = 'a';
	char *s = "abdcd";
	m = printf("%s\n", s);
	n = _printf("%s\n", s);
	i =  _printf("%c\n", c);
	y = printf("%c\n", c);
	printf("%d %d\n %d %d", i, y, n, m);
	return (0);
}
