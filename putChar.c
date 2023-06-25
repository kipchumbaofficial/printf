#include "main.h"
/**
 * putChar - Writes a character to stdout
 * @c: Character to be printed
 *
 * Return: 1 on success and -1 otherwise
 */
int putChar(char c)
{
	return (write(1, &c, 1));
}
