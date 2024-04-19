#include <stdio.h>

/**
 * main - print numbers from 0 to 100 but if it is
 *	multiples of three or five or both of them print
 *	another names
 *
 * Return: return always (0)
*/
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
