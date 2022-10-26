#include "main.h"
#include <string.h>
/**
 * print_rev - is the main function
 * @s: is the variable
 * Return: return success 0
 */
void print_rev(char *s)
{
	int a = 0;
	while (s[a] != '\0')
		a++;
	while (a)
		_putchar(s[--a]);
	_putchar('\n');
}
