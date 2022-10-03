#include <stdio.h>
#include <stdlib.h>
#include "main.h"

 /**
  * main - prints the multiplication of two integers,followed by a new line
  * atoi - converts a string to an integer
  * @argc: number of arguments passed to the function
  * @argv: argument vector of pointers to strings
  * Return: 0 if no errors, else 1
  */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
