#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int i;

	buffer *b;

	b = malloc(sizeof(struct buffer));

	init_buffer(b, format);

	va_start(b->ap, format);


	while (b->format[b->fmt_index] != '\0')
	{
		if (b->format[b->fmt_index] != '%' && b->format[b->fmt_index] != '\0')
		{
			to_buff(b);
		}
		else
		{
			b->fmt_index++;
			_parse(b);
			b->fmt_index--;
		}

	}

	write(1, b->buffer, b->buff_index);
	va_end(b->ap);

	
}
