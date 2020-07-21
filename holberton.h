#ifndef _PRINT_F_
#define _PRINT_F_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct conversion - This struct content.
 *@sym: Firts Element
 *@f: Second Element
 *
 */
struct conversion
{
	char *sym;
	int (*f)(va_list);
};
typedef struct conversion conver_struct;

int selector(const char *format, conver_struct print_list[], va_list arg_list);
int _printf(const char *format, ...);
int put_char(char);
int print_character(va_list);
int print_string(va_list);
int print_string_rev(va_list);
int print_rot13(va_list);
char *rev_string(char *);
int print_percent(va_list);
int print_integer(va_list);
int print_number_un(unsigned int n);
int print_number(va_list args);
int print_unsigned(va_list args);

#endif /* _PRINT_F_ */
