#include <stdio.h>
#include "main.h"

/**
 * main - print the largest of 3 integers
 * Return:0
 */

int main(void)
{
	int test;
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if  (a > b)
	{
		test = a;
	}
	else
	{
		test = b;
	}
	if (test > c)
	{
		largest = test;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
