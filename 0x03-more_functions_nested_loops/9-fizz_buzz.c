#include <stdio.h>
#include <stdlib.h>

/**
 * main - changes numbers into either fizz, buzz or fizzbuzz
 * Description: Multiples of 3 are changed to Fizz,
 * multiples of 5 are changed to buzz, multiples of both are FizzBuzz
 * Return: (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 101; ++i)
	{
		printf((printf("%s%s",(i%3==0)
				?
				"Fizz"
				:"",
				(i%5==0) ? "Buzz" : ""
			)
		) ? "\n" : "%d\n", i); 
	}
	return (0);
}
