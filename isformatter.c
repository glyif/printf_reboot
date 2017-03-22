#include "header.h"

char _isformatter(char f)
{
	if (f == 's')
		return ('s');
	if (f == 'c')
		return ('c');
	if (f == 'd')
		return ('d');
	if (f == 'i')
		return ('i');

	return ('\0');
}

int _isheight(char f)
{
	if (f == 'h' || f == 'l' || f == 'L')
		return (1);
	else
		return(0);
}

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
