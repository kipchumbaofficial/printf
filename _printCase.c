include "main.h"
/**
 * printCase - prints characters
 * @orodha : String argument
 *
 * Return : Number of intergers
 */

int printCase(va_list orodha)
{
	int i = 0;
	char *character;

	character = va_arg(orodha, char*);
	i = putChar(character);
	return (i);
}
