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

/**
 * _binary_numbers - prints binary
 * @list: number to print
 * Return: number of elements
 **/
int _binary_numbers(va_list list)
{	int i = 0, j, n = 0, m = 0, num;
	int binary[100];

	num = va_arg(list, int);
	if (num == '\0')
		return (-1);
	m = num;
	if (num >= 0)
	{
		while (num > 0)
		{
			binary[i] = num % 2;
			num /= 2;
			++i;
		}
		n = i;
		if (m < 99)
		{
			for (j = i - 1 ; j >= 0; --j)
				put_char(binary[j] + '0');
		}
		if (m >= 100)
		{
			for (j = i  ; j >= 0; --j)
				put_char(binary[j] + '0');
		}
	}
	else
	{
		if (num >= -9)
		{
			put_char('-');
			put_char(num * -1 + '0');
		}
		else
		{
			put_char('-');
			put_char((num / 10) * -1 + '0');
			put_char((num % 10) * -1 + '0');
		}
	}	return (n);
}
