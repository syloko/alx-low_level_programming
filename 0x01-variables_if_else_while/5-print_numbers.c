#include <stdio.h>

/**
* main - prints all single digit base 10 numbers,
* followed by a new line.
* Return: Always 0.
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%i", n);
	printf("\n");
	return (0);
}
