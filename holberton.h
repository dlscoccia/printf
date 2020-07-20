#ifndef _PRINT_F_
#define _PRINT_F_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


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
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);

#endif /* _PRINT_F_ */
