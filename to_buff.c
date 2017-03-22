#include <stdio.h>
#include "header.h"

void to_buff(buffer *b)
{
	int i;
	int tmp_bytes;

	if (b->buff_index < b->buff_bytes)
	{
		b->buffer[b->buff_index] = b->format[b->fmt_index];
		printf(" %c ", b->buffer[b->buff_index]);
		b->buff_index++;
		b->fmt_index++;
	}
	else
	{

		for (i = 0; i < b->buff_bytes; i++)
			b->tmpbuff[i] = b->buffer[i];

		reset_buffer(b->buffer, b->buff_bytes);

		tmp_bytes = b->buff_bytes;

		b->buff_bytes = b->buff_bytes * 2;

		b->buffer = malloc(b->buff_bytes);

		for (i = 0; i < tmp_bytes ; i++)
			b->buffer[i] = b->tmpbuff[i];
		
		free(b->tmpbuff);

		b->tmpbuff = malloc(b->buff_bytes * 2);

	}
}

void reset_buffer(char *buffer, int size)
{
	int i;

	for (i = 0; i < size; i++)
		buffer[i] = '\0';
}
