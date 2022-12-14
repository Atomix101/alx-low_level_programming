#include "main.h"
/*
 *print alpabets
 *Description: use for loop to print small letters
 *retutn:0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
int main()
{
	print_alphabet();
	return (0);
}
