#include <stdio.h>

/**
 * puts2 - print every other character of the string
 * @str: variable to store characters
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i = i + 2;
	}
	putchar('\n');
}
