#include <stdio.h>

/**
* main - prints out the alphabet in lowercase and reverse,
* follwed by a new line.
* Return: Always 0 upon successful run.
*/
int main(void)
{

	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
