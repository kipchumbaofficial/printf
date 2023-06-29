#include "main.h"
/**
 * printBinary - Prints decimal in binary
 * @orodha: List of integers
 *
 * Return: Number of charactres printed
 */
int printBinary(va_list orodha)
{
	long int nmb;
	int i, j;
	int by[255];

	nmb = va_arg(orodha, int);
	if (nmb == 0)
	{
		putChar('0');
		return (1);
	}
	i = 0;
	while (nmb > 0)
	{
		by[i] = nmb % 2;
		nmb /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putChar('0' + by[j]);
	}
	return (i);
}
