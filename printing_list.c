#include "holberton.h"
/**
 *print_character - Secundary Funtion.
 *@list: Parameter.
 *
 *Return: 1
 */
int print_character(va_list list)
{
	put_char(va_arg(list, int));
	return (1);
}
/**
 *print_string - Secundary Funtion.
 *@list: Parameter.
 *
 *Return: 1
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == '\0')
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		put_char(str[i]);
	return (i);
}
/**
 *print_percent - Secundary Funtion.
 *@list: Parameter.
 *
 *Return: 1
 */
int print_percent(va_list list __attribute__((unused)))
{
	put_char('%');
	return (1);
}
/**
 *print_integer - Secundary Funtion.
 *@list: Parameter.
 *
 *Return: 1
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
