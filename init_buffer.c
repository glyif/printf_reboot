#include "header.h"
#include <stdlib.h>
#include <stdio.h>

void init_buffer(buffer *b, const char *format)
{
	b->buff_bytes = 1024;
	b->format = format;
	b->buffer = malloc(b->buff_bytes);
	b->tmpbuff = malloc(b->buff_bytes * 2);
	b->buff_index = 0;
	b->fmt_index = 0;

	reset_buffer(b->buffer, b->buff_bytes);
	reset_buffer(b->tmpbuff, b->buff_bytes * 2);
}

void init_specs(specs *s)
{
	int i;

	for (i = 0; i <= 5; i++)
		s->flag[i] = '\0';

	s->width = 0;
	s->p = 0;
	s->height = '\0';
	s->c = '\0';
	s->v = 1;
}

void init_mod_buffer(mod_buffer *b)
{
	b->original = malloc (512);
	reset_buffer(b->original, 512);
	b->modified = malloc (1024);
	reset_buffer(b->modified, 1024);
}
