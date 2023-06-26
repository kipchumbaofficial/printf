#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
int putChar(char c);
int _printf(const char *format, ...);
int _stRlen_(const char *string);

#endif
