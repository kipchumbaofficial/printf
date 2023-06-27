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

#endif
