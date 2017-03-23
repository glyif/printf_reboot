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
void apply_flag(specs *c, mod_buffer *s);
void expand_c(va_list ap, mod_buffer *s);
void expand_s(va_list ap, mod_buffer *s);
void expand_d(va_list ap, mod_buffer *s);
void to_buff(buffer *b);
void tmp_t_buffer(mod_buffer *s, buffer *b);
void mod_t_org(mod_buffer *s);
void reset_buffer(char *buffer, int size);
char _isformatter(char f);
int _isheight(char f);
int _isalpha(int c);
char *int_t_string(int n);
int _strlen(char *s);
void _rev(char *s, int start);
int intlen(int n);
int _abs(int n);
/* flags */
void sign_flag(specs *c, mod_buffer *s);

#endif
