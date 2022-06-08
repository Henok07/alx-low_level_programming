#include <stdio.h>
#include "main.h"

/**
 * main - print the largest of 3 integers
 * Return:0
 */

int largest_number(int a, int b, int c)
{
	int test;
	int largest;

	if (a > b)
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
