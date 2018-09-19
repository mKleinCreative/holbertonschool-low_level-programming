#include <stdlib.h>
#include <stdio.h>

 /**
  * natural - finding the sums of numbers
  *
  * Description: Find the sum of all numbers divisible by 3 or 5 below 1024
  **/

void natural(void)
{
	int sum;
	for each number 1 to 1024
		if (number % 3)
			sum += number
		else if (number % 5)
			sum += number
	printf("%d", sum);
}
