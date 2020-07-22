#include "holberton.h"
/**
 * print_rot13 - prints string into code rot13
 * @list: pointer of the string to code
 * Return: number of elements printed
 **/

int print_rot13(va_list list)
{
	int i;
	int j;
	char *s;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(list, char *);
	if (s == '\0')
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == in[j])
			{
				put_char(out[j]);
				break;
			}
		}
		if (j == 53)
			put_char(s[i]);
	}
	return (i);
}
