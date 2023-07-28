#include "main.h"

/*
 * print_char function takes a pointer to a `va_list` as an argument and
 * prints the next argument in the list as a character to the standard output.
 */
void print_char(va_list *args)
{
        int ch = va_arg(*args, int);

        write(1, &ch, 1);
}

/*
 * int_to_str converts ineger to string and store in array
 * using strlen to length of string
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

/*
 * print_int function takes a pointer to a `va_list` as an argument and
 * prints the next argument in the list as an integer to the standard output.
 */
void print_int(va_list *args)
{
        int i = va_arg(*args, int);
        int len;
        char s[20];

        int_to_str(i, s);
        len = strlen(s);
        write(1, s, len);
}}
