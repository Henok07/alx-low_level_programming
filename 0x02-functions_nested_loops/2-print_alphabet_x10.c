#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: print the alphabet in lowercase ten times
 *
 * Return: void
 *
 */
int main (void);

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++);
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
	{
			putchar(ch);
	}
	putchar('\n');
	}
}	
