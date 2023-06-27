#include "main.h"
/**
 * _printDEF- Default function
 * @format: pointer to character
 * @orodha: character of string
 *
 * Return: nothing
 */
void _printDEF(__attribute__((unused))va_list orodha, const char *format)
{
	putChar('%');
	putChar(*format);
}
