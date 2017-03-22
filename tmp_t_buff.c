#include "header.h"

void tmp_t_buffer(mod_buffer *s, buffer *b)
{
	int i;

	i = 0;

	while (s->original[i] != '\0')
	{
		b->buffer[b->buff_index] = s->original[i];
		b->buff_index++;
		i++;
	}

}
