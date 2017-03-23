#include <stdio.h>
#include "header.h"

void sign_flag(specs *c, mod_buffer *s)
{
	int i;
	int j;

	if (c->c == 'd' || c->c == 'i')
	{
		if (s->original[0] != '-')
		{
			i = 0;
			j = 0;

			s->modified[i] = '+';
			i++;

			while (s->original[j] != '\0')
			{
				s->modified[i] = s->original[j];
				i++;
				j++;
			}
			
			mod_t_org(s);
			printf("%s", s->original);
		}		

	}

}
