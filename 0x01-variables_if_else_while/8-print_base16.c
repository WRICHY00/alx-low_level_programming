#include <stdio.h>
/**
*main - prints alphabets in base 16
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int h;
	char alp;

	for (h = 0; h < 10; h++)
	{
		putchar((h % 16) + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{

		putchar(alp);
	}
	putchar('\n');

	return (0);
}




