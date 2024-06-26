#include "main.h"
#include <stddef.h>
/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */
int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

/**
 * _strlen - print a string.
 * @s: string.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}
