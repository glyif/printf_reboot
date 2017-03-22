#include "header.h"

void expand_c(va_list ap, mod_buffer *s)
{
	char c;

	c = va_arg(ap, int);

	s->original[0] = c;
}
