#include <stdio.h>
#include "header.h"

void apply_f(specs *c, mod_buffer *s, buffer *b)
{
	
	expand_f f[] = {
		{'c', expand_c},
		{'\0', NULL}
	};

	int i;

	i = 0;

	while (f[i].c != '\0')
	{
		if(f[i].c == c->c)
			f[i].f(b->ap, s);

		i++;
	}

	tmp_t_buffer(s, b);
}

