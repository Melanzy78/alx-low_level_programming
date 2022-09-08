#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	char c;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
	
}
