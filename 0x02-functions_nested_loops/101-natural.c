#include <stdlib.h>
#include <stdio.h>

 /**
  * natural - finding the sums of numbers
  *
  * Description: Find the sum of all numbers divisible by 3 or 5 below 1024
  **/

int main(void)
{
	int sum;
	int count;

	count = 0;

	while(count <= 1024)
	{
		if (count % 3)
			sum += count;
		else if (count % 5)
			sum += count;
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
