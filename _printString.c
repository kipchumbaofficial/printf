#include "main.h"
/**
 * printString - Prints String
 * @orodha: String arguments
 *
 * Return: Length of string
 */
int printString(va_list orodha)
{
	const char *string;
	int i;

	string = va_arg(orodha, const char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		putChar(string[i]);
	}
	return (i);
}
