#include <stdio.h>
/**
*main - Prints the alphabets in lowercase and upercase
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char alp;
	char Alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	} for (Alp = 'A'; Alp <= 'Z'; Alp++)
	{
		putchar(Alp);
	}
	putchar('\n');

	return (0);
}
