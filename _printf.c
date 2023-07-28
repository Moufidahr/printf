#include "main.h"

/**
 * _printf- Entry point
 *
 * Description: 'function takes a format string
 * and a variable number of arguments,
 * and prints the arguments to the standard output
 * according to the format string.
 * It supports the `%c` and `%d` format specifiers
 * for printing characters and integers,
 * respectively. It returns the number of characters
 * printed to the standard output'
 *
 * @format: parameter
 *
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	for (const char *p = format; *p; p++)
	{
		if (*p != '%')
		{
			write(1, p, 1);
			count++;
			continue;
		}

		char c = *++p;

		if (c == 'c')
		{
			print_char(&args);
			count++;
		}
		else if (c == 'd')
		{
			print_int(&args);
			count++;
		}
		else
		{
			write(1, p, 1);
			count++;
		}
	}

	va_end(args);
	return (count);
}
