#include "main.h"
/**
  *main - prints alphabets using _putchar
  *
  *Return: Always 0 (Success)
  */
void print_alphabet_x10(void);
{
	char i;

	for (i = 'a'; i < z; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
