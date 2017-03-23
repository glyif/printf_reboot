#include "header.h"

void mod_t_org(mod_buffer *s)
{
	int i;

	reset_buffer(s->original, 512);

	i = 0;
	while (s->modified[i] != '\0')
	{
		s->original[i] = s->modified[i];
		i++;
	}
}
