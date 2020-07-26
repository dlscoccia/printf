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
	//	{"s", print_string},
		{"b", _binary_numbers}, 
	//	{"u", print_unsigned},
	//	{"R", print_rot13}, 
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
