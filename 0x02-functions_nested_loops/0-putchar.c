#include "main.h"

int main(void)
{
	int a;
	char str[]="_putchar";

	for(a=0;str[a] !='0';a++)
		_putchar(str[a]);
	_putchar('\n');
	return (0);
}
