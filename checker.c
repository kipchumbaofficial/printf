#include "main.h"
/**
 *_formatChecker- checks format
 *@format: character
 *
 * Return : -1
 */
int _formatChecker(const char *format)
{
	if (format == NULL)
		return (-1);
	return (-1);
}

/**
 * _printExact- reciplicates format
 * @orodha: string character
 * @format: character
 *
 * return : number of characters
 */

int _printExact(__attribute__((unused))va_list orodha, const char *format)
{
	int i = 0;

	putChar(*format);
	i++;

	return (i);
}
