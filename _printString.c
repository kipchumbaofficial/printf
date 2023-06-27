#include "main.h"
#include <string.h>
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
	i = strlen(string);
	while (*string != '\0')
	{
		putChar(*string);
		string++;
	}
	return (i);
}
