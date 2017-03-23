#include <stdio.h>
#include "header.h"

void apply_f(specs *c, mod_buffer *s, buffer *b)
{
	
	expander f[] = {
		{'c', expand_c},
		{'s', expand_s},
		{'d', expand_d},
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

}

void apply_flag(specs *c, mod_buffer *s)
{
	int i;
	int j;

	expander flag[] = {
		/*
		{'#', hash_flag},
		{' ', space_flag},
		{'-', hy_flag},
		*/
		{'+', sign_flag},
		{'\0', NULL}
	};

	i = 0;
	
	while (flag[i].c != '\0')
	{
		j = 0;
		while (c->flag[j] != '\0')
		{
			if (flag[i].c == c->flag[j])
				flag[i].f(c, s);
			j++;
		}
		i++;
	}
}
