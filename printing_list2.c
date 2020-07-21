#include "holberton.h"
/**
 * print_string_rev - prints a string in reverse
 * @list: pointer to string to reverse an print
 * Return: number of character printed
**/
int print_string_rev(va_list list)
{
	int i = 0;
	int lenght;
	char *s;

	s = va_arg(list, char *);

	if (s == '\0')
		s = "(null)";
	for (; s[i + 1] != '\0'; i++) /* go to the end of string - counts len */
	{
		lenght = lenght + 1;
	}
	for (; s[i]; i--)
		put_char(s[i]);

	return (lenght);
}

/**
 * rot13 - prints string into code rot13
 * @list: pointer of the string to code
 * Return: number of elements printed
 **/
char *rot13(va_list list)
{
	char *s;
	int i, j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}
		}
	}

	return (s);
}
