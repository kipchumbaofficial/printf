#include "main.h"
/**
 * printString - Prints String
 * @orodha: String arguments
 *
 * Return: Length of string
 */
int printString(va_list orodha)
{
	char *string;
	int i = 0;

	string = va_arg(orodha, char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	while (*string != '\0')
	{
		putChar(*string);
		string++;
		i++;
	}
	return (i);
}
