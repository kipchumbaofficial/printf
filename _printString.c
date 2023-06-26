#include "main.h"
/**
 * printString - Prints string to std out
 * @orodha - Va_list vatriable
 *
 * Return: Length
 */
int printString(va_list orodha)
{
	const char *sT;
	int i;

	sT = va_arg(orodha, const char *);
	if (sT == NULL)
	{
		sT = "(null)";
	}
	for (i = 0; sT[i] != '\0'; i++)
	{
		putChar(sT[i]);
	}
	return (i);
}
