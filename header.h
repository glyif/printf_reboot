#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include "base_structs.h"
int _printf(const char *format, ...);
void init_buffer(buffer *b, const char *format);
void init_specs(specs *s);
void init_mod_buffer(mod_buffer *b);
void _parse(buffer *b);
void apply_f(specs *c, mod_buffer *s, buffer *b);
void expand_c(va_list ap, mod_buffer *s);
void to_buff(buffer *b);
void tmp_t_buffer(mod_buffer *s, buffer *b);
void reset_buffer(char *buffer, int size);
char _isformatter(char f);
int _isheight(char f);
int _isalpha(int c);
#endif
