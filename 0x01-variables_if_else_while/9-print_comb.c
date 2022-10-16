#include <stdio.h>

/**
* main - prints every possible combination of single digit
* numbers seperated by a comma and space.
* Return: always 0.
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
