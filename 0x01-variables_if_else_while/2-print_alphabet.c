#include <stdio.h>

/**
* main - prints the alphabets in lowercase.
* Return: Always 0 upon successful run.
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

