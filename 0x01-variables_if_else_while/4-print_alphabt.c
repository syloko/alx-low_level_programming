#include <stdio.h>

/**
* main - prints out the alphabets in lowercase
* follwed by a new line except e and q.
* Return: Always 0 upon success.
*/
int main(void)
{
	char ch  = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
