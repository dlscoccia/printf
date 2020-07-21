#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string to reverse an print
 * Return: number of character printed
**/
int print_rev(char *s)
{
	int i = 0;
	int lenght;

	for (; s[i + 1]; i++)
	{
		lenght = lenght + 1;
	}
	for (; s[i]; i--)
		put_char(s[i]);

	return (lenght);
}

/**
 * rot13 - prints string into code rot13
 * @s: pointer of the string to code
 * Return: number of elements printed
 **/
char *rot13(char *s)
{
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
