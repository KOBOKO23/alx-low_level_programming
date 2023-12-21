#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * multiples of 3 prints Fizz
 * multiples of 5 prints Buzz
 * multiples 3 and 5 prints FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char j[] = "Fizz";
	char k[] = "Buzz";
	char m[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", k);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", m);
		else if (i % 3 == 0)
			printf("%s ", j);
		else if (i % 5 == 0)
			printf("%s ", k);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
