#include "holberton.h"

/**
  * print_binary - print binary (representation)
  * @n: number
  */
void print_binary(unsigned long int n)
{
	int nBits = 8;
	unsigned long int m = 0;
	unsigned long int h = 0;
	int t = 0;

	nBits = sizeof(unsigned long int) * nBits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (; nBits >= 0; nBits--)
	{
		m = n >> nBits;
		h = m & 1;
		if (h)
		{
			t = 1;
			_putchar('1');
		}
		else if (t == 1)
			_putchar('0');
	}
}

