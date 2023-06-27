#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int putChar(char c);
int _printf(const char *format, ...);
int _stRlen_(const char *string);
int printString(va_list orodha);
int  printSigned(va_list orodha);
int printCase(va_list orodha);
int printPercent(va_list orodha);
void _printDEF(__attribute__((unused))va_list orodha, const char *format);
int _printExact(__attribute__((unused))va_list orodha, const char *format);
int _formatChecker(const char *format);
#endif
