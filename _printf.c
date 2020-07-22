#include "holberton.h"
/**
 *_printf - prints a string with specifiers.
 *@format: the main string passed to the function.
 *
 *Return: number of total characters printed to stdout
 */
int _printf(const char *format, ...)
{
	int printed_chars;

	conver_struct print_list[] = {
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"c", print_character},
		{"s", print_string},
/*		{"b", print_binary}, */
		{"u", print_unsigned},
/*		{"r", print_string_rev},
		{"R", print_rot13}, */
>>>>>>> 6470b3b057222587e7d640f454053b083710566e
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = selector(format, print_list, arg_list);
	va_end(arg_list);

	return (printed_chars);
}
