#include "header.h"

void _parse(buffer *b)
{
	int j, i;
	char form;
	int totallen;
	specs *sep;
	mod_buffer *expand;

	sep = malloc(sizeof(specs));
	expand =  malloc(sizeof(mod_buffer));

	init_specs(sep);
	init_mod_buffer(expand);

	form = '\0';

	j = b->fmt_index++;


	while (form == '\0' && b->format[j] != '\0')
	{
		form = _isformatter(b->format[j]);
		sep->c = form;


		if (_isalpha(b->format[j]) == 1 && form == '\0')
		{
			if (_isheight(b->format[j]) == 1)
			{
				sep->height = b->format[j];
				break;
			}

			sep->v = 0;
			return ;
		}
		j++;
	}

	
	totallen = j - b->fmt_index + 1;

	sep->fmtstring = malloc(sizeof(char) * totallen);

	for (i = 0; totallen > 0; b->fmt_index++, totallen--, i++)
		sep->fmtstring[i] = b->format[b->fmt_index];

	apply_f(sep, expand, b);

}
