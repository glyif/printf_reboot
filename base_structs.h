#include "header.h"

typedef struct specs {
	char flag[6];
	int width;
	int p;
	char height;
	char c;
	char *fmtstring;
	int v;
} specs;

typedef struct buffer
{
	const char *format;
	char *buffer;
	char *tmpbuff;
	int buff_index;
	int fmt_index;
	int buff_bytes;
	va_list ap;
} buffer;

typedef struct mod_buffer
{
	char *original;
	char *modified;
} mod_buffer;

typedef struct expander
{
	char c;
	void (*f)();
} expander;
