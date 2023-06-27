#include "main.h"

/**
 * printSigned - prints numbers
 * @orodha: String argument
 *
 * Return: Number of intergers
 */

int  printSigned(va_list orodha)
{
	int num = va_arg(orodha, int);
	int namba = 0;
	unsigned int x;
	int  gawa = 1;

	if (num < 0)
	{
		namba = putChar('-');
		x = num * -1;
	}
	else
	{
		x = num;
	}
	while (x / gawa > 9)
		gawa *= 10;
	while (gawa != 0)
	{
		namba += putChar('0' + x / gawa);
		x %= gawa;
		gawa /= 10;
	}
	return (namba);
}
