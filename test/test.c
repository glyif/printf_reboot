#include "../header.h"

int main(void)
{

	char *s;
	int d;

	s = "hello again";
	d = 100;

	_printf("asdf %c asdf, %c, %c, %c, %s, %s, %c\n", 'h', '0', 'b', 't', "try string", s, 's');
	_printf("%s", (char *)0);
	_printf("this number is %d", d); 
	return (0);
}
