#include "main.h"
#include <stdio.h>
/**
 * _printf - produces output according to format.
 * @format: character string
 *
 * Return: number of characters.
 */

int _printf(const char *format, ...)
{
	va_list orodha;
	int jumla = 0;

	if (format == NULL)
		return (-1);

	va_start(orodha, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					jumla += printCase(orodha);
					break;
				case '%':
					jumla += printPercent(orodha);
					break;
				case 's':
					jumla += printString(orodha);
					break;
				case 'i':
					jumla += printSigned(orodha);
					break;
				case 'd':
					jumla += printSigned(orodha);
					break;
				default:
					_printDEF(orodha, format);
					jumla += 2;
			}
		}
		else
		{
			putChar(*format);
			jumla++;
		}
		format++;
	}
	va_end(orodha);
	return (jumla);
}
