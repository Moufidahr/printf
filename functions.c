#include "main.h"

/**
 * print_char - Entry point
 *
 * Description: 'function takes a pointer to a `va_list` as an argument
 * prints the next argument in the list as a character to the standard output.'
 *
 * @args: parameter
 *
 * Return: Always 0 (Success)
 */
void print_char(va_list *args)
{
	int ch = va_arg(*args, int);

	write(1, &ch, 1);
}

/**
 * int_to_str - Entry point
 *
 * Description: 'converts ineger to string and store in array
 * using strlen to length of string'
 *
 * @s: parameter
 * @n: parameter
 *
 * Return: Always 0 (Success)
 */
void int_to_str(int n, char *s)
{
	int i = 0;
	int sign = n;

	if (sign < 0)
		n = -n;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
}

/**
 * print_int - Entry point
 *
 * Description: 'function takes a pointer to a va_list as an argument and
 * prints the next argument in the list as an integer to the standard output.'
 *
 * @args: parameter
 */
void print_int(va_list *args)
{
	int n = va_arg(*args, int);
	char buffer[11];
	int i = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (n < 0)
	{
		buffer[i++] = '-';
		n = -n;
	}
	int temp = n;
	int len = 0;

	while (temp > 0)
	{
		temp /= 10;
		len++;
	}
	i += len - 1;
	while (n > 0)
	{
		buffer[i--] = (n % 10) + '0';
		n /= 10;
	}
	write(1, buffer, len);
}

/**
 * print_string - Entry point
 *
 * Description: 'string and store in array
 *
 * @args: parameter
 *
 * Return: Always 0 (Success)
 */
void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	write(1, str, strlen(str));
}
