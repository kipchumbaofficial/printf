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
	int jumla = 0, weka;
	va_start(orodha, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					weka = va_arg(orodha, int);
					putChar(weka);
					jumla++;
					break;
				case 's':
					jumla = printString(orodha);
					break;
				case '%':
					putChar('%');
					jumla++;
					break;
				default:
					putChar('%');
					putChar(*format);
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
