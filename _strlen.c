#include <main.h>
/**
 * _stRlen_ - gets length of the string
 * @string: pointer to string.
 *
 *
 * Return: Length of string
 */

int _stRlen_(char *string)
{
	if (*string == '\0')
	{
		return (0);
	}
	{
		return (1 + _stRlen_(string + 1));
	}
}
