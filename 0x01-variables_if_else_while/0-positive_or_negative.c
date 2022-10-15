#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* Main displays a random number for n each time program is run
* and begins on a new line.
* Returns a value of (0) for each successful run
*/

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

	printf("%d is positive\n", n);

	else if (n == 0)

	printf("%d is zero\n", n);

	else if (n < 0)

	printf("%d is negative", n);

	return (0);
}
