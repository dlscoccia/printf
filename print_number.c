#include "holberton.h"
/**
*print_number - This funtion return a lenth of argument
*@args: Argument passed
*
*Return: lenth.
*/
int print_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(args, int);

	div = 1;
	len = 0;

	if (n < 0)
	{
		len += put_char('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += put_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
