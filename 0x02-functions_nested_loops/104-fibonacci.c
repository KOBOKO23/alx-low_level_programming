#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be comma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 0, b = 1, a2 = 0, b2 = 2;
	unsigned long int i, j, k;
	int c;

	printf("%lu, %lu, ", b, b2);
	for (c = 2; c < 98; c++)
	{
		if (b + b2 > LARGEST || a2 > 0 || a > 0)
		{
			i = (b + b2) / LARGEST;
			j = (b + b2) % LARGEST;
			k = a + a2 + i;
			a = a2, a2 = k;
			b = b2, b2 = j;
			printf("%lu%010lu", a2, b2);
		}
		else
		{
			j = b + b2;
			b = b2, b2 = j;
			printf("%lu", b2);
		}
		if (c != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
