#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from input to 98,in order separeted by a comma followed by a space.
 * description - prints all numbers
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
	
