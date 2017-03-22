#include "header.h"

void expand_c(va_list ap, mod_buffer *s)
{
	char c;

	c = va_arg(ap, int);

	s->original[0] = c;
	
}

void expand_s(va_list ap, mod_buffer *s)
{
	char *string;
	int i;

	i = 0;

	string = va_arg(ap, char *);
	
	while (string[i] != '\0')
	{
		s->original[i] = string[i];
		i++;
	}

}
