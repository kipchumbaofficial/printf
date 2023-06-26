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
	int jumla = 0;

	sT = va_arg(orodha, const char *);
	if (sT == NULL)
	{
		sT = "(null)";
	}
	while (*sT != '\0')
	{
		putChar(*sT);
		sT++;
		jumla++;
	}
	return (jumla);
}
