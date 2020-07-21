#include "holberton.h"

/**
 * print_string_rev - prints a string in reverse
 * @list: pointer to string to reverse an print
 * Return: number of character printed
**/
/*
int print_string_rev(va_list list)
{
	int i = 0;
	int lenght;
	char *s;
	char *rev;

	s = va_arg(list, char *);

	if (s == '\0')
		return (-1);
	rev = rev_string(s);

	if (rev == NULL)
		return (-1);
	for (lenght = 0; rev[lenght] != '\0'; lenght++)
		put_char(rev[lenght]);

	return (lenght);
}

/**
 * rev_string - prints string into code rot13
 * @s: pointer of the string to code
 * Return: number of elements printed
 **/
/*
char *rev_string(char *s)
{
	int lenght;
	int i;
	char tmp;
	char *dest;

	for (lenght = 0; s[lenght] != '\0'; lenght++) /* for lenght */
/*
	dest = malloc(sizeof(char) * lenght + 1);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		dest[i] = s[i];
	dest[i] = '\0';

	for (i = 0; i < lenght; i++, lenght--)
	{
		tmp = dest[lenght - 1];
		dest[lenght - 1] = dest[i];
		dest[i] = tmp;
	}
	return (dest);
}
*/
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
	if (s == NULL)
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
