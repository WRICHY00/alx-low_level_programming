#include "main.h"
/**
  *main - prints the possible single numbers
  *
  *Return: Always 0 (Success)
  */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
		a = n % 10;
	}
	if (a < 10)
	{
		a = -a;
	}
	_putchar(a + '0');
	
	return (a);
}
